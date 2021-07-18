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
#define mod 1000000007
typedef long long ll;
typedef long double ld;
using namespace std;

int main()
{
    fast_io();
    ll a[3];
    cin >> a[0] >> a[1] >> a[2];
    ll l = a[0] - a[1], r = a[1] - a[2];
    if (l == r)
        cout << "0";
    else if (l < r)
        cout << max(l, r) - min(l, r);
    else if (l > r)
    {
        ll x = 0, y = 0;
        x = (l - r) / 2 + (l - r) % 2;
        y = r - l + 2 * x;
        cout << x + y;
    }
    return 0;
}