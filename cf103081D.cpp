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
#include <vector>

#define fast_io()                \
    ios::sync_with_stdio(false); \
    std::cin.tie(0);
#define mod 998244353
#define N 1000007
typedef long long ll;
typedef long double ld;
using namespace std;
ll I, S, L, U;
ll ans = 0;

struct line
{
    set<pair<ll, ll>> next;
} lines[111111];
map<pair<ll, ll>, ll> vis;

void dfs(ll x, ll dis)
{
    for (auto i : lines[x].next)
    {
        if (vis[make_pair(x, i.first)] == 0 && vis[make_pair(i.first, x)] == 0)
        {
            if ((dis + i.second) * 2 < U)
            {
                ans++;
                vis[make_pair(x, i.first)] = vis[make_pair(i.first, x)] = 1;
                dfs(i.first, dis + i.second);
            }
            else
            {
                ans++;
                vis[make_pair(x, i.first)] = vis[make_pair(i.first, x)] = 1;
                continue;
            }
        }
    }
}

int main()
{
    fast_io();
    freopen(
        "C:/Users/aaa/Documents/Tencent Files/1932170807/FileRecv/secret18.in",
        "r", stdin);
    cin >> I >> S >> L >> U;
    for (int t = 0; t < S; t++)
    {
        ll i, j, l;
        cin >> i >> j >> l;
        lines[i].next.insert(make_pair(j, l));
        lines[j].next.insert(make_pair(i, l));
    }
    dfs(0, 0);
    cout << ans;
    return 0;
}
