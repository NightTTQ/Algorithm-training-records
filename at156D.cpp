//#include <bits/stdc++.h>
#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <cmath>
#include <iomanip>
#define fast_io()                \
    ios::sync_with_stdio(false); \
    std::cin.tie(0);
#define mod 1000000007
typedef long long ll;
typedef long double ld;
using namespace std;
ll qpow(ll a,ll b,ll m)
{
    ll ans=1;
    ll base = a;
    while(b>0)
    {
        if(b&1)
            ans = (ans * base) % m;
        base = (base * base) % m;
        b >>= 1;
    }
    return ans;
}
ll C(ll n,ll m)
{
    ll ans = 1;
    for (ll i = 1;i<=m; i++)
    {
        ll tmp;
        tmp = (n - i + 1) % mod;
        ans *= (tmp * qpow(i, mod - 2, mod)) % mod;
        ans %= mod;
    }
    return ans;
}

int main()
{
    fast_io();
    ll n, a, b;
    cin >> n >> a >> b;
    ll ans;
    ans = qpow(2, n, mod) - 1;
    ans=(ans+mod-C(n, a))%mod;
    ans=(ans+mod-C(n, b))%mod;
    cout << ans;
    system("pause");
    return 0;
}