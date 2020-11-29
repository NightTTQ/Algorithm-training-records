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
    ll m, t;
    for (int i = 0; i < n; i++)
    {
        cin >> t;
        if (!i)
            m = t;
        else
        {
            m = __gcd(m, t);
        }
    }
    int q;
    cin >> q;
    ll x;
    for (int i = 0; i < q; i++)
    {
        cin >> x;
        if (x % m)
            cout << "No\n";
        else
            cout << "Yes\n";
    }

    return 0;
}