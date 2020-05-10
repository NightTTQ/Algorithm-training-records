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

int cmp(int a, int b)
{
    return a > b;
}

int main()
{
    ll i, a[210000] = {0}, l, r, n, m, d[210000] = {0}, ans = 0;
    scanf("%lld%lld", &n, &m);
    for (i = 1; i <= m; i++)
    {
        scanf("%lld%lld", &l, &r);
        d[l] += 1;
        d[r + 1] -= 1;
    }
    for (i = 1; i <= n; i++)
    {
        a[i] = a[i - 1] + d[i];
    }
    sort(a + 1, a + 1 + n);
    for (i = n; i >= 1; i--)
    {
        ans += a[i] * i;
    }
    printf("%lld\n", ans);
    return 0;
}