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
        bool flag = false;
        ll n;
        cin >> n;
        ll cnt = n / 2020;
        ll c = n % 2020;
        if (c <= cnt)
            cout << "YES\n";
        else
            cout << "NO\n";
        /*
        for (ll i = 3; i <= sqrt(n); i = i + 2)
            if (n % i == 0)
            {
                flag = true;
                break;
            }
        if (flag)
            cout << "YES\n";
        else
            cout << "NO\n";
        */
    }

    return 0;
}