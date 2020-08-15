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
    ll n, k, m = -1e10;
    cin >> n >> k;
    ll p[n + 1], c[n + 1];
    for (int i = 1; i <= n; i++)
        cin >> p[i];
    for (int i = 1; i <= n; i++)
        cin >> c[i];
    for (int i = 1; i <= n; i++)
    {
        ll t = 0;
        ll now = i;
        for (int j = 1; j <= k; j++)
        {
            if (c[p[now]] < 0)
                break;
            t += c[p[now]];
            now = p[now];
            m = max(m, t);
        }
        // m = max(m, t);
    }
    cout << m;
    return 0;
}
