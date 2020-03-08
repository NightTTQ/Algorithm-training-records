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
struct B
{
    double v;
    double t;
    
    double b;
};
int cmp(B f,B a)
{
    return f.b > a.b;
}

int main()
{
    fast_io();
    int n;
    B peo[100001];
    cin >> n;
    for(int i=0;i<n;i++)
    {
        cin >> peo[i].v >> peo[i].t;
        peo[i].b = peo[i].v / peo[i].t;
    }
    sort(peo, peo + n, cmp);
    ll ans = 0,t=0;
    for(int i=0;i<n;i++)
    {
        t += peo[i].t;
        ans += t * peo[i].v;
    }
    cout << ans;
    return 0;
}