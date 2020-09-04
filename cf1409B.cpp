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
        ll a, b, x, y, n;
        cin >> a >> b >> x >> y >> n;
        ll ya = a, yb = b, yn = n;
        ll aa, bb;
        aa = a - x, bb = b - y;
        if (aa > bb)
        {
            ll t;
            t = min(a - x, n);
            a -= t;
            n -= t;
        }
        else
        {
            ll t;
            t = min(b - y, n);
            b -= t;
            n -= t;
        }
        if (n)
        {
            if (a != x)
            {
                ll t;
                t = min(a - x, n);
                a -= t;
                n -= t;
            }
            else
            {
                ll t;
                t = min(b - y, n);
                b -= t;
                n -= t;
            }
        }
        ll ans1 = a * b;

        a = ya, b = yb, n = yn;

        if (a > b)
        {
            ll t;
            t = min(b - y, n);
            b -= t;
            n -= t;
        }
        else
        {
            ll t;
            t = min(a - x, n);
            a -= t;
            n -= t;
        }
        if (n)
        {
            if (a != x)
            {
                ll t;
                t = min(a - x, n);
                a -= t;
                n -= t;
            }
            else
            {
                ll t;
                t = min(b - y, n);
                b -= t;
                n -= t;
            }
        }
        ll ans2 = a * b;

        cout << min(ans1, ans2) << "\n";
    }
    return 0;
}