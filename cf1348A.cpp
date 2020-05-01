//#include <bits/stdc++.h>
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
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
    int T;
    cin >> T;
    while (T--)
    {
        ll a = 0, b = 0, t = 1;
        int n;
        cin >> n;
        for (int i = 1; i <= n; i++)
        {
            t *= 2;
            if ((i <= n / 2 - 1) || i == n)
                b += t;
            else
                a += t;
        }
        cout << abs(a - b) << "\n";
    }

    return 0;
}