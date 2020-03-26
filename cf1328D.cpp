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

int main()
{
    fast_io();
    int n,T,temp;
    cin >> T;
    while(T--)
    {
        int n;
        string s;
        cin >> n ;
        int a[200001], ans[200001];
        cin>>a[0];
        int now = 1, m = 1;
        ans[0] = 1;
        for(int i = 1; i < n;i++)
        {
            cin>>a[i];
            if(a[i]!=a[i-1])
            {
                if(now==1)
                {
                    now = 2;
                    m = 2;
                } 
                else
                {
                    now = 1;
                    m = 2;
                }
                
            }
            ans[i] = now;
        }
        if((a[n-1]!=a[0])&&(ans[n-1]==ans[0]))
        {
            m=3;
            now=3;
            ans[n - 1] = now;
        }
        else
        {
            ans[n - 1] = now;
        }
        
        cout << m << "\n";
        for (int i = 0; i < n;i++)
            cout<<ans[i]<< " ";
        cout << "\n";
    }
        return 0;
}