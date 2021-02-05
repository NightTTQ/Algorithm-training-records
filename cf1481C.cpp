//#include <bits/stdc++.h>
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <functional>
#include <iomanip>
#include <iostream>
#include <map>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <vector>
#define fast_io()                \
    ios::sync_with_stdio(false); \
    std::cin.tie(0);
#define mod 998244353
typedef long long ll;
typedef long double ld;
using namespace std;

int main()
{
    fast_io();
    int T;
    cin >> T;
    while (T--)
    {
        int n, m;
        cin >> n >> m;
        vector<int> a(n), b(n), c(m);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n; i++)
            cin >> b[i];
        for (int i = 0; i < m; i++)
            cin >> c[i];
        vector<int> ans(m);
        vector<pair<int, int>> diff;
        for (int i = 0; i < n; i++)
        {
            diff.push_back(make_pair(a[i], b[i]));
        }
        bool flag = false;

        //给最后一个人找位置
        for (int j = 0; j < n; j++)
        {
            if (c[m - 1] == b[j])
            {
                ans[m - 1] = j + 1;
                diff[j].first = diff[j].second;
                flag = true;
                break;
            }
        }
        if (flag)
        {
            //给其他需要变色的方块找到画家
            for (int i = 0; i < n; i++)
            {
                if (diff[i].first != diff[i].second)
                {
                    bool done = false;
                    for (int j = 0; j < m - 1; j++)
                    {
                        if (c[j] && c[j] == diff[i].second)
                        {
                            c[j] = 0;
                            ans[j] = i + 1;
                            done = true;
                            break;
                        }
                    }
                    if (!done)
                    {
                        flag = false;
                        break;
                    }
                }
            }
        }
        if (flag)
        {
            //剩下的画家全部画在最后一个画家画的地方
            for (int j = 0; j < m - 1; j++)
            {
                if (c[j])
                {
                    c[j] = 0;
                    ans[j] = ans[m - 1];
                }
            }
        }
        if (flag)
        {
            cout << "YES\n";
            for (int i = 0; i < m; i++)
                cout << ans[i] << " ";
            cout << "\n";
        }

        else
            cout << "NO\n";
    }
    return 0;
}