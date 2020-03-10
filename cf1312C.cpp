//#include <bits/stdc++.h>
#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <cmath>
#include <vector>
#define fast_io()                \
    ios::sync_with_stdio(false); \
    std::cin.tie(0);
typedef long long ll;
typedef long double ld;
using namespace std;
ll qpow(ll a,ll b)
{
    ll ans=1;
    ll base = a;
    while(b>0)
    {
        if(b&1)
            ans = (ans * base);
        base = (base * base);
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
        bool flag = true;
        ll a[31],sum=0;
        cin >> n >> k;
        for (int i = 1; i <= n;i++)
        {
            cin >> a[i];
            if(flag)
                if(a[i]%k!=0)
                    flag = false;
                else
                    sum += a[i] / k;  
        }

        if(!flag)
        {
            cout << "NO"
                 << "\n";
            continue;
        }
        sort(a + 1, a + n + 1);
        for (int i = 1; i <= n;i++) 
            if(a[i]!=0)
            {
                
                break;
            }
        cout << "YES"
             << "\n";
    }
    
    return 0;
}