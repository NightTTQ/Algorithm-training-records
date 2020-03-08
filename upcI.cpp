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
int main()
{
    fast_io();
    int n,m;
    int x[1001], y[1001], z[1001], v[1001];
    cin >> n >> m;
    for (int i = 0; i < n;i++)
        cin >> x[i]>>y[i]>>z[i]>>v[i];
    sort(x, x + n);
    sort(y, y + n);
    sort(z, z + n);
    sort(v, v + n);
    ll ans = 1;
    for (int i = 0; i < n - 1; i++)
    {
        if(abs(v[i]-v[i+1])>m)
            ans++;
        if(abs(x[i]-x[i+1])>1)
            ans++;
        if(abs(y[i]-y[i+1])>1)
            ans++;
        if(abs(z[i]-z[i+1])>1)
            ans++;
    }
    cout << ans;
    return 0;
}