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
    ll n;
    cin >> n;
    ll a[n];
    ll m = 0, ans = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (i == 0)
            m = a[0];
        else if (m > a[i])
            ans += m - a[i];
        else
            m = a[i];
    }
    cout << ans;
    return 0;
}
