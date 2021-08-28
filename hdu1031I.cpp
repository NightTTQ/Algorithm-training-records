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
#include <utility>
#include <vector>
#define fast_io()                \
    ios::sync_with_stdio(false); \
    std::cin.tie(0);
#define mod 1000000007
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
        map<pair<ll, ll>, ll> mp;
        ll n;
        cin >> n;
        ll x = 0, y = 0;
        mp[{x, y}] = 1;
        ll ans = 0;
        while (n--)
        {
            char c;
            cin >> c;
            if (c == 'L')
                x--;
            if (c == 'R')
                x++;
            if (c == 'U')
                y++;
            if (c == 'D')
                y--;
            if (mp[{x, y}] != 0)
            {
                ans += mp[{x, y}];
                mp[{x, y}]++;
            }
            else
                mp[{x, y}] = 1;
        }
        cout << ans << "\n";
    }
    return 0;
}