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
using namespace std;  
#define ll long long
const ll mod = 1e9 + 7;
 
inline ll qpow(long long a, int b)
{
    int ans = 1;
    a = (a % mod + mod) % mod;
    for (; b; b >>= 1)
    {
        if (b & 1) ans = (a * ans) % mod;
        a = (a * a) % mod;
    }
    return ans;
}
ll C(ll n,ll m)
{
    return (n * qpow(m, mod - 2)) % mod;
}
int main()  
{  
    fast_io(); 
    ll a, b;
    while(cin >> a >> b)
    
   
    cout << C(a,b) << endl;
    
    system("pause");
    return 0;  
} 