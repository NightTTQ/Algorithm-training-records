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

const int maxN = 200010;
struct Edge
{
    int to, next, w;
} e[maxN];

int n, m, cnt, p[maxN], Dis[maxN];
int In[maxN];
bool visited[maxN];

void Add_Edge(const int x, const int y, const int z)
{
    e[++cnt].to = y;
    e[cnt].next = p[x];
    e[cnt].w = z;
    p[x] = cnt;
    return;
}

bool Spfa(const int S)
{
    int i, t, temp;
    queue<int> Q;
    memset(visited, 0, sizeof(visited));
    memset(Dis, 0x3f, sizeof(Dis));
    memset(In, 0, sizeof(In));

    Q.push(S);
    visited[S] = true;
    Dis[S] = 0;

    while (!Q.empty())
    {
        t = Q.front();
        Q.pop();
        visited[t] = false;
        for (i = p[t]; i; i = e[i].next)
        {
            temp = e[i].to;
            if (Dis[temp] > Dis[t] + e[i].w)
            {
                Dis[temp] = Dis[t] + e[i].w;
                if (!visited[temp])
                {
                    Q.push(temp);
                    visited[temp] = true;
                    if (++In[temp] > n)
                        return false;
                }
            }
        }
    }
    return true;
}

int main()
{
    fast_io();
    cin >> n >> m;
    for (int i = 1; i <= m; ++i)
    {
        int x, y, _;
        cin >> x >> y >> _;
        Add_Edge(x, y, _);
    }
    int ans = 0, ans2 = 0;
    Spfa(0);

    for (int i = 1; i <= n; i++)
        if (Dis[i] > ans)
            ans = Dis[i], ans2 = i;
    cout << ans << " " << ans2;

    return 0;
}