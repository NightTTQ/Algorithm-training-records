// submitted by HNUST025
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
#define mod 1000000007
typedef long long ll;
typedef long double ld;
using namespace std;

int n, m;
int ans = 0;
vector<pair<int, int>> range[2001];

inline int dfs(int col, int u, int d, int deep)
{
    int width = d - u + 1;
    if (width * (m - (col - deep)) <= ans)
        return deep;
    ans = max(ans, width * deep);
    if (col >= m)
        return deep;
    for (auto i : range[col + 1])
    {
        if (i.second < u || i.first > d)
            continue;
        dfs(col + 1, max(u, i.first), min(d, i.second), deep + 1);
    }
    return deep;
}

int main()
{
    fast_io();
    int T;
    cin >> T;
    while (T--)
    {
        cin >> n >> m;
        int all[n][m];
        bool mp[n][m];
        memset(mp, true, sizeof(mp));
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                cin >> all[i][j];
        for (int i = 0; i < m; i++)
        {
            int u = 0, d = 0;
            for (int j = 1; j < n; j++)
            {
                if (all[j - 1][i] <= all[j][i])
                    d = j;
                else if (u != d)
                {
                    range[i].push_back(make_pair(u, d));
                    u = j;
                    d = j;
                }
                else
                {
                    u = j;
                    d = j;
                }
            }
            if (u != d)
                range[i].push_back(make_pair(u, d));
        }
        for (int i = 0; i < m; i++)
            for (auto j : range[i])
                dfs(i, j.first, j.second, 1);
        cout << ans << "\n";
    }
}
/*
1
10 5
1 1 1 1 1
2 0 0 0 1
9 9 9 9 9
8 7 6 8 7
5 8 7 3 5
6 9 2 5 8
7 5 3 5 6
8 1 4 8 5
9 0 3 7 4
1 5 5 5 5


*/