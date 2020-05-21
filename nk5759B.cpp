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
    int n, m;
    int o, l, r;
    cin >> n >> m;
    vector<ll> a(n);
    vector<ll> b(n);
    vector<int> c(n);
    vector<ll> f(n);

    f[0] = 1, f[1] = 3;
    for (int i = 2; i < n; i++)
        f[i] = 3 * f[i - 1] + 2 * f[i - 2];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (i > 0)
            b[i] = a[i] - b[i - 1];
        else
            b[i] = a[i];
    }

    while (m--)
    {
        cin >> o >> l >> r;
        if (o == 1)
        {
            c[l - 1]++;
            c[r]++;
        }
        else
        {
        }
    }
    return 0;
}