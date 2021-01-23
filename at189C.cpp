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

struct drink
{
    ll v;
    ll p;
};

int cmp(drink a, drink b)
{
    return (a.p * a.v) < (b.p * b.v);
}

int main()
{
    fast_io();
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    ll ans = 0;
    ll m = 0;
    for (int i = 0; i < n; i++)
    {
        ans = a[i];
        for (int j = i - 1; j >= 0; j--)
            if (a[j] >= a[i])
                ans += a[i];
            else
                break;
        for (int j = i + 1; j < n; j++)
            if (a[j] >= a[i])
                ans += a[i];
            else
                break;
        if (ans > m)
            m = ans;
    }
    cout << m;
    return 0;
}