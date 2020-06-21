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
    int n;
    cin >> n;
    int a[n];
    int t;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (i > 0)
            t = t ^ a[i];
        else
            t = a[i];
    }
    int ans;
    for (int i = 0; i < n; i++)
    {
        ans = t ^ a[i];
        cout << ans << " ";
    }

    return 0;
}