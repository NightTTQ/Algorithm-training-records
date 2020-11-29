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
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    ll dp[n + 4];
    memset(dp, 0, sizeof(dp));
    dp[2] = a[1];
    for (int i = 3; i < n; i++)
        dp[i] = max((a[i - 1] + dp[i - 3]), max(dp[i - 1], dp[i - 2]));
    cout << dp[n - 1] << "\n";

    return 0;
}