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
#define mod 998244353
#define N 1000007
typedef long long ll;
typedef long double ld;
using namespace std;

int main()
{
    fast_io();
    int T;
    cin>>T;
    while(T--)
    {
        ll n,m;
        cin>>n>>m;
        ll per=(m-1)/n+1;
        ll ans=1e9+7;
        while(true)
        {
            ll nn=(m-1)/per+1;
            ans=min(ans,n-nn+(nn*per)-m);
            if(nn==1)
                break;
            per=(m-1)/(nn-1)+1;
        }
        cout<<ans<<"\n";
    }
    return 0;
}