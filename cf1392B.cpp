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
    int T;
    cin >> T;
    while (T--)
    {
        ll n, k;
        cin >> n >> k;
        ll a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        if (k % 2)
        {
            ll d = -10e10;
            for (int i = 0; i < n; i++)
                d = max(d, a[i]);
            for (int i = 0; i < n; i++)
                a[i] = d - a[i];
        }
        else
        {
            ll d = -10e10;
            for (int i = 0; i < n; i++)
                d = max(d, a[i]);
            for (int i = 0; i < n; i++)
                a[i] = d - a[i];
            d = -10e10;
            for (int i = 0; i < n; i++)
                d = max(d, a[i]);
            for (int i = 0; i < n; i++)
                a[i] = d - a[i];
        }
        for (int i = 0; i < n; i++)
            cout << a[i] << " ";
        cout << "\n";
    }
    return 0;
}
