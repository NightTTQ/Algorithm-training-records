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
        double m, p, q;
        cin >> m >> p >> q;
        p /= 100, q /= 100;
        ll cnt = m / p;  //所需局数 b可打cnt-1次
        ll ans = m - (cnt - 1) * q;
        cout << mod % ans << "\n";
    }
    return 0;
}
