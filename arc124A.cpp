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
    ll n, K;
    cin >> n >> K;
    char c[K + 1];
    ll k[K + 1], a[n + 1];
    for (int i = 1; i <= K; i++)
        cin >> c[i] >> k[i];
    for (int i = 1; i <= n; i++)
        a[i] = K;
    for (int i = 1; i <= K; i++)
    {
        if (c[i] == 'L')
        {
            a[k[i]] = 1;
            for (int j = 1; j <= k[i]; j++)
                if (a[j] != 1)
                    a[j]--;
        }
        else
        {
            a[k[i]] = 1;
            for (int j = k[i] + 1; j <= n; j++)
                if (a[j] != 1)
                    a[j]--;
        }
    }
    ll ans = 1;
    for (int i = 1; i <= n; i++)
    {
        ans *= a[i];
        ans %= mod;
    }
    cout << ans << "\n";
    return 0;
}