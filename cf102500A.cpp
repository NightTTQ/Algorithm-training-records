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
    int n;
    int p;
    int x[100001];
    cin >> n;
    int sov[n];
    memset(sov, 0, sizeof(sov));
    int m[n][2];
    for (int i = 0; i < n; i++)
        cin >> m[i][0] >> m[i][1];
    cin >> p;

    for (int i = 0; i < p; i++)
        cin >> x[i];
    bool flag = true;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < p; j++)
        {
            if (x[j] >= m[i][0] && x[j] <= m[i][1])
            {
                sov[i]++;
                if (sov[i] > 2)
                {
                    flag = false;
                    break;
                }
            }
        }
        if (!flag)
            break;
    }
    if (!flag)
    {
        cout << "impossible";
        return 0;
    }
    vector<int> ans;
    for (int i = 0; i < n; i++)
        if (sov[i] == 0)
        {
            int l = m[i][0], r = m[i][1];
            sov[i] = 2;
            if (i && m[i - 1][1] == l)
            {
                if (sov[i - 1] == 2)
                    l++;
                else
                    sov[i - 1]++;
            }
            if (m[i + 1][0] == r)
            {
                if (sov[i + 1] == 2)
                    r--;
                else
                    sov[i + 1]++;
            }
            ans.push_back(l);
            ans.push_back(r);
            x[++p] = l, x[++p] = r;
        }
    for (int i = 0; i < n; i++)
        if (sov[i] == 1)
        {
            int r = m[i][1];
            for (int j = 0; j < p; j++)
                if (r == x[j])
                {
                    r--;
                    break;
                }
            if (m[i + 1][0] == r)
            {
                if (sov[i + 1] == 2)
                    r--;
                else
                    sov[i + 1]++;
            }
            for (int j = 0; j < p; j++)
                if (r == x[j])
                {
                    r--;
                    break;
                }
            ans.push_back(r);
            x[++p] = r;
        }
    sort(ans.begin(), ans.end());
    cout << ans.size() << "\n";
    for (int i = 0; i < ans.size(); i++)
        cout << ans[i] << " ";
    return 0;
}