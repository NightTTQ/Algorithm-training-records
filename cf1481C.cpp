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
        map<int, vector<int>> all, need;
        for (int i = 0; i < n; i++)
        {
            if (a[i] != b[i])
                need[b[i]].push_back(i);
            all[b[i]].push_back(i);
        }
        vector<int> ans;
        //对所有画家找对应需要改变的块
        for (int i = m - 1; i >= 0; i--)
        {
            auto t = need.find(c[i]);
            if (t == need.end() || t->second.empty())
                ans.push_back(-1);
            else
            {
                ans.push_back(need[c[i]].back());
                need[c[i]].pop_back();
            }
        }
        //检查每一个需要改变的块是否都已经有对应的画家
        bool done = true;
        for (auto i : need)
            if (!i.second.empty())
            {
                done = false;
                break;
            }
        //如果最后一个画家没有对应的应改变块，则分配一个对应的不需改变块
        if (ans[0] == -1)
        {
            auto t = all.find(c[m - 1]);
            if (t == all.end())
                done = false;
            else
                ans[0] = t->second.front();
        }
        if (done)
        {
            //对于没有分配块的画家，让他们画在后一个画家画的地方，将自己的操作覆盖
            for (int i = 1; i < m; i++)
                if (ans[i] == -1)
                    ans[i] = ans[i - 1];
            cout << "YES\n";
            //倒序输出
            for (int i = m - 1; i >= 0; i--)
                cout << ans[i] + 1 << ' ';
            cout << '\n';
        }
        else
            cout << "NO\n";
    }

    return 0;
}