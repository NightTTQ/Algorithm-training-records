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
    int k, n;
    int p[1001];
    cin >> n >> k;
    for (int i = 0; i < n; i++)
        cin >> p[i];
    sort(p, p + n);
    ll ans = 0;
    for (int i = 0; i < k; i++)
        ans += p[i];
    cout << ans;
    return 0;
}