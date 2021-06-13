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
#define mod 1000000007
typedef long long ll;
typedef long double ld;
using namespace std;

int main()
{
    fast_io();
    ll n, k;
    cin >> n >> k;
    vector<ll> a(n);
    map<ll, ll> all, cnt;
    for (auto &i : a)
    {
        cin >> i;
        all[i]++;
    }

    sort(a.begin(), a.end());
    ll dp[n];
    memset(dp, 0, sizeof(dp));
    dp[0] = 1;
    cnt[a[0]] = 0;
    ll ans = 1;
    for (int i = 1; i < n; i++)
    {
        if (all[a[i] - k])
        {
            dp[i] = dp[cnt[a[i] - k]] + 1;
        }
        else
            dp[i] = 1;
        ans = max(dp[i], ans);
        cnt[a[i]] = i;
    }
    cout << ans;
    return 0;
}