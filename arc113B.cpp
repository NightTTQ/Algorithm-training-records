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
            ans = (ans * base)%m;
        base = (base * base)%m;
        b >>= 1;
    }
    return ans;
}

int main()
{
    fast_io();
    ll a, b, c;
    cin >> a >> b >> c;
    ll t=0;
    ll aa = a % 10;
    if (aa == 2 || aa == 3 || aa == 8 || aa == 7)
    {
        t = qpow(b, c, 4);
        if (t == 0)
            t=4;
    }
    else if (aa == 4 || aa == 9)
    {
        t = qpow(b, c, 2);
        if (t == 0)
            t=2;
    }
    else
        t=1;
    cout<<qpow(a,t,10);
    return 0;
}