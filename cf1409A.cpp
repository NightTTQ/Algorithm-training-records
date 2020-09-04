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
        ll a, b;
        cin >> a >> b;
        ll t;
        t = abs(a - b);
        ll ans;
        ans = t % 10;
        if (ans)
            cout << t / 10 + 1 << "\n";
        else
            cout << t / 10 << "\n";
    }
    return 0;
}
