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
    int n, q, t, b, c;
    ll tol = 0;
    map<int, int> ans;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> t;
        ans[t]++;
        tol += t;
    }
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        cin >> b >> c;
        tol -= b * ans[b];
        tol += c * ans[b];
        ans[c] += ans[b];
        ans[b] = 0;
        cout << tol << "\n";
    }

    return 0;
}