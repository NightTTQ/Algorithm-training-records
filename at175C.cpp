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

int main()
{
    fast_io();
    ll x, k, d;
    ll cnt = 0;
    cin >> x >> k >> d;
    x = abs(x);
    cnt = min(k, x / d);
    x -= cnt * d;
    if ((k - cnt) % 2)
        cout << abs(d - x);
    else
        cout << x;
    return 0;
}
