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
int n, m;
int bfs(int x, int y, int dir, int deep);

int main()
{
    fast_io();
    int sx, sy, ex, ey;
    cin >> n >> m;
    int dt[n][m];
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
        {
            string c;
            cin >> c;
            if (c == "A" || c == "B" || c == "C")
                dt[j][i] = 100;
            else if (c == "S")
                sx = j, sy = i;
            else if (c == "E")
                ex = j, ey = i;
            else
                dt[j][i] = atoi(c);
        }

    return 0;
}
int bfs(int x, int y, int dir, int deep)
{
    if (x < 0 || y < 0 || x >= n || y >= m)
        return deep;
}
