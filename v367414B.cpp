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
#include <string>
#include <vector>
#define fast_io()                \
    ios::sync_with_stdio(false); \
    std::cin.tie(0);
#define mod 998244353
typedef long long ll;
typedef long double ld;
using namespace std;
ll sum[100001], a[100001], stack[100001], l[100001], r[100001];

int main()
{
    fast_io();
    int n;
    cin >> n;
    sum[0] = 0;
    stack[0] = 0;
    a[0] = -1;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        sum[i] = sum[i - 1] + a[i];
    }

    int top = 0;
    for (int i = 1; i <= n; i++)
    {
        while (a[stack[top]] >= a[i])
            top--;
        l[i] = stack[top++] + 1;
        stack[top] = i;
    }

    top = 0;
    stack[0] = n + 1;
    a[n + 1] = -1;
    for (int i = n; i >= 1; i--)
    {
        while (a[stack[top]] >= a[i])
            top--;
        r[i] = stack[top++] - 1;
        stack[top] = i;
    }
    ll ans = -1;
    int id = 0;
    for (int i = 1; i <= n; i++)
    {
        ll t = (sum[r[i]] - sum[l[i] - 1]) * a[i];
        if (t > ans)
        {
            ans = t;
            id = i;
        }
    }
    cout << ans << "\n" << l[id] << " " << r[id];
    return 0;
}