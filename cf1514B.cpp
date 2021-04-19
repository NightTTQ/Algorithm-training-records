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

ll qpow(ll a, ll b, ll m)
{
    ll ans = 1;
    ll base = a;
    while (b > 0)
    {
        if (b & 1)
            ans = (ans * base) % m;
        base = (base * base) % m;
        b >>= 1;
    }
    return ans;
}

int main()
{
    fast_io();
    int T;
    cin >> T;
    while (T--)
    {
        int n, k;
        cin >> n >> k;
        ll ans = qpow(n, k, mod) % mod;
        cout << ans << "\n";
    }
    return 0;
}