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
        ll a, b, q;
        cin >> a >> b >> q;
        ll ma = max(a, b);
        ll lcm = a * b / __gcd(a, b);
        ll cnt = 0, ucnt = 0;
        for (ll i = ma; i < lcm; i++)
        {
            if ((i % a) % b != (i % b) % a)
                cnt++;
        }
        ucnt = lcm - ma - cnt;
        while (q--)
        {
            ll l, r, ans = 0;
            cin >> l >> r;
            if (l >= lcm)
            {
            }
            else if (l <= ma && r >= lcm)
            {
            }
        }
    }
    return 0;
}