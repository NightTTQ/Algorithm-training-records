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
        ll p, q;
        cin >> p >> q;
        ll x = 0;
        for (ll i = 1; i <= sqrt(p); i++)
        {
            if ((i % q == 0) || (p / i) % q == 0)
                continue;
            if (p % i == 0)
            {
                x = p / i;

                break;
            }
        }
        cout << x << "\n";
    }
    return 0;
}