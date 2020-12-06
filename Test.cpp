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

ll qpow(ll a, ll b)
{
    ll ans = 1;
    ll base = a;
    while (b > 0)
    {
        if (b & 1)
            ans = (ans * base);
        base = (base * base);
        b >>= 1;
    }
    return ans;
}

int main()
{
    int n = 50, i = 666;
    n = (i = 2, ++i);
    cout << n;
    return 0;
}