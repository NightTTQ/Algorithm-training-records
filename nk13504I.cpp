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
    ll n;
    cin >> n;
    vector<ll> a(n);
    for (auto &i : a)
        cin >> i;

    ll ans = 0;
    ans += (a[0] + a[1]);
    ans %= mod;
    ans += (a[0] * a[1]);
    ans %= mod;
    for (int i = 2; i < n; i++)
    {
        ll tmp = ans;
        ans += a[i];
        ans %= mod;
        ans += (a[i] * tmp);
        ans %= mod;
    }
    if (n == 1)
        cout << a[0] << "\n";
    else
        cout << ans % mod << "\n";
    return 0;
}