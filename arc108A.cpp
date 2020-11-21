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
    ll s, p;
    cin >> s >> p;
    set<ll> all;
    for (ll i = 1; i <= sqrt(p); i++)
    {
        if (p % i == 0)
        {
            all.insert(i);
            all.insert(p / i);
        }
    }
    for (auto i : all)
        for (auto j : all)
        {
            if (i + j == s)
            {
                cout << "Yes";
                return 0;
            }
        }
    cout << "No";
    return 0;
}