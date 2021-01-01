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

struct point
{
    int x;
    int y;
};

double dis(point a, point b)
{
    return sqrt((a.x - b.x) * (a.x - b.x) + (a.y - b.y) * (a.y - b.y));
}

int pre[1001];

int find(int a)
{
    if (pre[a] != a)
        pre[a] = find(pre[a]);
    return pre[a];
}

void join(int x, int y)
{
    int fx = find(x), fy = find(y);
    if (fx != fy)
        pre[fy] = fx;
}

int main()
{
    fast_io();
    int n, d;
    cin >> n >> d;
    for (int i = 0; i < n; i++)
        pre[i] = i;
    point points[n];
    for (int i = 0; i < n; i++)
    {
        cin >> points[i].x >> points[i].y;
    }
    for (int i = 0; i < n; i++)
        for (int j = i + 1; j < n; j++)
        {
            if (dis(points[i], points[j]) > d)
            {
                //距离太远且未被染色，染上新颜色
                //距离太远但已被染色，不操作
            }
            else
            {
                //在距离内，是同一菌落，染同一种颜色
                join(i, j);
            }
        }
    int ans = 0;
    for (int i = 0; i < n; i++)
        if (pre[i] == i)
            ans++;
    cout << ans;
    return 0;
}