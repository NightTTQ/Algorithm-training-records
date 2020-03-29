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
    int k, n, a[200001];
    cin >> k >> n;
    int m = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if(i>=1)
        if(m<abs(a[i]-a[i-1]))
            m=abs(a[i]-a[i-1]);
    }
    
    if(m<abs(k-a[n-1])+a[0])
            m=abs(k-a[n-1])+a[0];
    cout << k - m;
    return 0;
}