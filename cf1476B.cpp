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
        ll n, k;
        cin >> n >> k;
        vector<ll> p(n);
        ll sum = 0, cur = 0;
        for (int i = 0; i < n; i++)
            cin >> p[i];
        cur = p[0];
        for (int i = 1; i < n; i++)
        {
            if (100 * p[i] <= k * cur)
            {
                cur += p[i];
                continue;
            }
            else
            {
                ll t = ceil((100 * p[i] - k * cur) / (double)k);
                sum += t;
                cur += p[i] + t;
            }
        }
        cout << sum << "\n";
    }

    return 0;
}