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
    ll h, w, m;
    cin >> h >> w >> m;
    ll xx, yy;
    ll cnth[h], cntw[w];
    bool is[h][w];
    memset(is, 0, sizeof(is));
    memset(cnth, 0, sizeof(cnth));
    memset(cntw, 0, sizeof(cntw));
    for (int i = 0; i < m; i++)
    {
        cin >> xx >> yy;
        is[xx - 1][yy - 1] = true;
        cnth[xx - 1]++;
        cntw[yy - 1]++;
    }
    ll mh = 0, mw = 0;
    ll mx = 0, my = 0;
    for (int i = 0; i < h; i++)
        if (cnth[i] > mh)
        {
            mh = cnth[i];
            mx = i;
        }
    for (int i = 0; i < w; i++)
        if (cntw[i] > mw)
        {
            mw = cntw[i];
            my = i;
        }
    sort(cnth, cnth + h);
    sort(cntw, cntw + w);
    if (!is[mx][my])
        cout << cnth[h - 1] + cntw[w - 1];
    else
        cout << cnth[h - 1] + cntw[w - 1] - 1;

    return 0;
}
