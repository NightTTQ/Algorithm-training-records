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

int main()
{
    fast_io();
    int w, p;
    cin >> w >> p;
    double vv = 200000.0 / w;
    p = 100 - p;
    double ans = 0;
    while (vv > 1e-6)
    {
        ans += vv / 9.8;
        vv *= p * 1.0 / 100;
    }
    cout << fixed << setprecision(3) << ans;
    return 0;
}