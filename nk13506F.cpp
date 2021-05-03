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
void rot(ll n, ll *x, ll *y, ll rx, ll ry)
{
    if (ry == 0)
    {
        if (rx == 1)
        {
            *x = n-1 - *x;
            *y = n-1 - *y;
        }

        //Swap x and y
        int t  = *x;
        *x = *y;
        *y = t;
    }
}
//Hilbert代码到XY坐标
void d2xy(ll n, ll d, ll *x, ll *y)
{
    ll rx, ry, s, t=d;
    *x = *y = 0;
    for (s=1; s<n; s*=2)
    {
        rx = 1 & (t/2);
        ry = 1 & (t ^ rx);
        rot(s, x, y, rx, ry);
        *x += s * rx;
        *y += s * ry;
        t /= 4;
    }
}
int main()
{
    fast_io();
    ll n,m;
    ll xx,yy;
    ll *x=&xx;
    ll *y=&yy;
    cin>>n>>m;
    d2xy(n,m-1,x,y);
    cout<<*x+1<<" "<<*y+1;
    return 0;
}