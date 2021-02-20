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

ll f(ll n)
{
    string s = to_string(n);
    sort(s.begin(), s.end());
    ll g2 = atoi(s.c_str());
    sort(s.rbegin(), s.rend());
    ll g1 = atoi(s.c_str());
    return g1-g2;
}

int main()
{
    fast_io();
    int n, k;
    cin >> n >> k;
    ll ans=n;
    for (int i = 1; i <= k; i++)
    {
        ans = f(ans);
    }
    cout<<ans;
    return 0;
}