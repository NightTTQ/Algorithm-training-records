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
    ll n, k, p[2000001];
    cin >> n >> k;
    for (ll i = 0;i< n;i++)
        cin >> p[i];
    ll ans = 0;
    for (ll i = n; i > n - k;i--)
        ans += i;
    ll cnt = 0, mul = 1;
    bool flag = false;
    for(ll i=0; i < n;i++)
    {
        if((p[i]>=n-k+1))
        {
            if(flag)
            {
                mul = (mul*(cnt + 1))%mod;
                cnt = 0;
            }
            flag = true;
            continue;
        }
        if(flag)
            cnt++;
    }
    cout << ans << " " << mul;
    return 0;
}