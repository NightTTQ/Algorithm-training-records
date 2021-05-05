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
        ll n;
        cin >> n;
        if (n % 2050)
            cout << "-1\n";
        else
        {
            ll cnt = n / 2050;
            int ans = 0;
            while (cnt)
            {
                ans += cnt % 10;
                cnt /= 10;
            }
            cout << ans << "\n";
        }
    }
    return 0;
}