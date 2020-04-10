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
#include <map>
#include <queue>
#define fast_io()                \
    ios::sync_with_stdio(false); \
    std::cin.tie(0);
#define mod 998244353
typedef long long ll;
typedef long double ld;
using namespace std;
int cmp(double a, double b)
{
    return a > b;
}
int main()
{
    fast_io();
    int t;
    cin>> t;
    while (t--)
    {
        int n,x;
        int ans = 0;
        cin >> n >> x;
        double a[n];
        double sum = 0;
        for(int i=0; i < n;i++)
        {
            cin>>a[i];
            
        }
            
        sort(a, a + n, cmp);

        for(int i=0; i < n;i++)
        {
            
            sum+=a[i];
            if(sum/(i+1)>=x)
                ans++;
            else
                sum-=a[i];
            }
        
        cout<<ans<<"\n";
            
    }

    return 0;
}