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

struct app
{
    ll a;
    ll b;
};

int main()
{
    fast_io();
    int T;
    cin >> T;
    while (T--)
    {
        ll n, m;
        cin >> n >> m;
        app apps[n];
        for (int i = 0; i < n; i++)
            cin >> apps[i].a >> apps[i].b;
    }

    return 0;
}