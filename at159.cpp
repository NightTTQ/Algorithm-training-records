//#include <bits/stdc++.h>
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <string>
#include <iomanip>
#include <iostream>
#include <vector>    
#include <cstdlib>
#include <set>
#define fast_io()                \
    ios::sync_with_stdio(false); \
    std::cin.tie(0);
#define mod 998244353
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
    int n, m;
    cin >> n >> m;
    if(n>1&&m>1)
        cout << C(n, 2) + C(m, 2);
    else if(n>1)
        cout << C(n, 2);
    else if(m>1)
        cout << C(m, 2);
    else
        cout << "0";
    return 0;
}