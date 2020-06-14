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
#include <string>
#include <vector>
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
    ll a, v, b, w, t;
    cin >> a >> v >> b >> w >> t;
    if (a != b && v <= w)
        cout << "NO\n";
    else
    {
        int ds = abs(v - w);
        if (abs(a - b) <= t * ds)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}