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
#define N 505
typedef long long ll;
typedef long double ld;
using namespace std;

vector<int> G[N];
bool vis[N];
ll dp[N * N][N];
bool g[N][N];

void dfs(int i)
{
    vis[i] = true;
    for (int j = 0; j < G[i].size(); j++)
        if (!vis[G[i][j]])
            dfs(G[i][j]);
}

int main()
{
    fast_io();
    int n, m;
    cin >> n >> m;
    memset(vis, 0, sizeof(vis));
    memset(g, 0, sizeof(g));
    int state = (1 << n);
    for (int i = 0; i < state; ++i)
        for (int j = 0; j < n; ++j)
            dp[i][j] = 0;

    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        G[u].push_back(v);
        G[v].push_back(u);

        g[u][v] = g[v][u] = true;
        dp[(1 << u) | (1 << v)][u] = dp[(1 << u) | (1 << v)][v] = 1;
    }
    ll block = 0;
    ll cir = 0;
    for (int i = 1; i <= n; i++)
    {
        if (!vis[i])
        {
            dfs(i);
            block++;
        }
    }
    for (int s = 1; s < state; ++s)
    {
        int i, j, k;
        for (i = 0; i < n && !(s & (1 << i)); ++i)
            ;
        for (j = i + 1; j < n; ++j)
            if (s & (1 << j))
            {
                for (k = i + 1; k < n; ++k)
                    if (s & (1 << k))
                    {
                        if (g[k][j])
                            dp[s][j] += dp[s ^ (1 << j)][k];
                    }
                if (g[i][j] && (s ^ (1 << i) ^ (1 << j)))
                    cir += dp[s][j];
            }
    }
    if ((cir + block) % 2)
        cout << "Alice\n";
    else
        cout << "Bob\n";
    cout << block << "\n" << cir;
    return 0;
}