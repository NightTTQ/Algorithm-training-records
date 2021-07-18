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
#define mod 1000000007
typedef long long ll;
typedef long double ld;
using namespace std;

int main()
{
    fast_io();
    int n;
    cin >> n;
    vector<int> a(n), b(n), c(n);
    for (auto &i : a)
        cin >> i;
    for (auto &i : b)
        cin >> i;
    for (auto &i : c)
        cin >> i;
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    sort(c.begin(), c.end());
    int ans = 0;
    int aa = 0, bb = 0, cc = 0;
    while (aa < n && bb < n && cc < n)
    {
        if (a[aa] < b[bb] && b[bb] < c[cc])
        {
            ans++;
            aa++, bb++, cc++;
            continue;
        }
        if (a[aa] >= b[bb])
        {
            bb++;
            continue;
        }
        if (b[bb] >= c[cc])
        {
            cc++;
            continue;
        }
    }
    cout << ans;
    return 0;
}