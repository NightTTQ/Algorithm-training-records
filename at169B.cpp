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
    ll n, ans = 1, a;
    bool b0 = false, b1 = false;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        if (a == 0)
            b0 = true;
        if (ans != 0 && (ll)1e18 / ans < a)
            ans = 0;
        else
            ans *= a;
    }
    if (b0 || ans)
        cout << ans;
    else
        cout << "-1";
    return 0;
}