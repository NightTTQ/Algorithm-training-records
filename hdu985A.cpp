// submitted by HNUST025
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

ll solve(ll n)
{
    n = n % mod;
    return ((((n * (n + 1)) / 2) % mod) * (((n * (n + 1)) / 2) % mod) % mod) *
           8 % mod;
}

int main()
{
    fast_io();
    int T;
    cin >> T;
    while (T--)
    {
        ll n;
        cin >> n;
        cout << solve(n - 1) << "\n";
    }
    return 0;
}