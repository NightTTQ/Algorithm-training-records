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
    fast_io();
    ll b, bb;
    string aa;
    cin >> aa >> b;
    int cnt = aa.length();
    ll t = qpow(10, cnt);
    aa = "100" + aa;
    ll a = 0;
    for (auto i : aa)
    {
        a *= 10;
        a += i;
    }
    int ans = 0;
    for (ll i = 1; i < 900; i++)
    {
        if (a % b == 0)
            ans++;
        a += t;
    }
    cout << ans;
    return 0;
}
