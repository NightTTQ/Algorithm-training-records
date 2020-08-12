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
    int n, m;
    cin >> n >> m;
    int a[n], b[m];
    int aa;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (i == 0)
            aa = a[0];
        else
            aa = aa | a[i];
    }
    int ans;
    int bb;
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
        if (i == 0)
            bb = b[0];
        else
            bb = bb & b[i];
    }
    ans = aa & bb;
    cout << ans;
    return 0;
}