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
typedef long long ll;
typedef long double ld;
using namespace std;
#define G  1100000  
#define mod 1000003  
ll pri[G];  
ll ni[G],ans;  
ll poww(ll a,ll b)  
{  
    ll ans=1,base=a;  
    while (b>0)  
    {  
        if (b%2==1)  
            ans=(base*ans)%mod;  
        base=(base*base)%mod;  
        b/=2;  
    }  
    return ans;  
}  
void s()   //打表 
{  
    pri[0]=1;  
    ni[0]=1;  
    for (int i=1;i<G ;i++)  
    {  
        pri[i]=pri[i-1]*i%mod;  //N！ 
        ni[i]=poww(pri[i],mod-2);  
    }  
}  

ll C(ll n,ll m)
{
    return ((pri[n]*ni[m]%mod)*ni[n-m])%mod;
}

int main()
{
    fast_io();
    s();
    ll n, a, b;
    cin >> n >> a >> b;
    ll ans;
    ans = poww(2, n);
    cout << ans << endl;
    ans += 2 * mod - 1;
    ans-=C(n, a);
    
    ans-=C(n, b);
    cout << ans % mod;

    
    system("pause");
    return 0;
}