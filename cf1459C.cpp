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
    int n, m;
    cin >> n >> m;
    ll a[n], b[m];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < m; i++)
        cin >> b[i];
    ll agcd = a[0];

    for (int i = 1; i < n; i++)
    {
        agcd = __gcd(agcd, a[i]);
    }
    ll bgcd = b[0] + agcd;
    for (int i = 0; i < m; i++)
    {
        bgcd = __gcd(bgcd, b[i] + agcd);
    }

    for (int j = 0; j < m; j++)
    {
        ll ans = a[0] + b[j];
        for (int i = 1; i < n; i++)
        {
            ans = __gcd(ans, a[i] + b[j]);
        }
        cout << ans << " ";
        // cout << __gcd(agcd + b[j], agcd) << " ";
    }

    return 0;
}