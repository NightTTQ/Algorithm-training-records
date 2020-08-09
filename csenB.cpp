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

struct magic
{
    ll x;
    ll y;
    // double dis;
};

int cmp(magic a, magic b)
{
    return a.x < b.x && a.y < b.y;
}

int main()
{
    fast_io();
    ll n, k, w1, w2;
    cin >> n >> k >> w1 >> w2;
    magic point[k];
    for (int i = 0; i < k; i++)
    {
        cin >> point[i].x >> point[i].y;
        // point[i].dis = sqrt(point[i].x * point[i].x + point[i].y *
        // point[i].y);
    }

    ll total = n * 2 * w1;
    if (2 * w1 <= w2)
        cout << total;
    else
    {
        sort(point, point + k, cmp);
        magic last{0, 0};
        for (ll i = 0; i < k; i++)
        {
            if ((point[i].x > last.x && point[i].y > last.y) ||
                (last.x == last.y && last.x == 0 && point[i].x >= last.x &&
                 point[i].y >= last.y))
            {
                last = point[i];
                total -= w1 * 2 - w2;
            }
        }
        cout << total;
    }
    return 0;
}
