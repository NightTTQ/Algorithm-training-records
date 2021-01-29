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
        if (n > k)
        {
            ll ans = 1;
            if (n % k)
                ans++;
            else
                ans = 1;
            cout << ans << "\n";
        }
        else
        {
            ll ans = k / n;
            if (k % n)
                ans++;
            cout << ans << "\n";
        }
    }

    return 0;
}