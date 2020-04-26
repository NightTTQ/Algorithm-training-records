//#include <bits/stdc++.h>
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
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
    int T;
    cin >> T;
    while (T--)
    {
        ll pay = 0;
        ll x, y;
        ll a, b;
        cin >> x >> y >> a >> b;
        x = abs(x);
        y = abs(y);
        if (2 * a >= b)
        {
            ll mi = 0;
            mi = min(x, y);
            x -= mi;
            y -= mi;
            pay += b * mi;
            pay += (x + y) * a;
        }
        else
            pay += (x + y) * a;
        cout << pay << "\n";
    }
    return 0;
}