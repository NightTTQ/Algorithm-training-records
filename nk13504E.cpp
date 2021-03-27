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
    int n, q;
    cin >> n >> q;
    vector<int> a(n);
    for (auto &i : a)
        cin >> i;
    for (int i = 0; i < q; i++)
    {
        int l, r, x;
        cin >> l >> r >> x;
        int ans = 0;
        for (int j = l - 1; j <= r - 1; j++)
            if (a[j] % x == 0)
                ans++;

        cout << ans << "\n";
    }

    return 0;
}