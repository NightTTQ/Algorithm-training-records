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

void primeFactor(int n, vector<int> &pri)
{
    while (n % 2 == 0)
    {
        // cout << 2 << " ";
        pri.push_back(2);
        n /= 2;
    }
    for (int i = 3; i < sqrt(n * 1.0); i += 2)
        while (n % i == 0)
        {
            // cout << i << " ";
            pri.push_back(i);
            n /= i;
        }
    if (n > 2)
        // cout << n;
        pri.push_back(n);
    cout << '\n';
}

int main()
{
    fast_io();
    ll n;
    ll ans = 0, div = 0;
    vector<int> pri;
    cin >> n;
    while (n % 2 == 0)
    {
        div++;
        n /= 2;
    }
    for (ll i = 1; i <= div; i++)
    {
        div -= i;
        ans++;
    }
    for (int i = 3; i <= sqrt(n * 1.0); i += 2)
    {
        div = 0;
        while (n % i == 0)
        {
            div++;
            n /= i;
        }
        for (ll i = 1; i <= div; i++)
        {
            div -= i;
            ans++;
        }
    }
    if (n != 1)
        ans++;
    cout << ans;
    return 0;
}