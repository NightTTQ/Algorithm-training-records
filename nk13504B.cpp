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
    vector<ll> a(n);
    // vector<ll> list(n);
    for (auto &i : a)
        cin >> i;

    map<int, vector<int>> rec;
    // list[0] = 0;
    rec[a[0]].push_back(0);
    int base = a[0], ans = 0;
    for (int i = 1; i < n; i++)
    {
        if (a[i] < base)
        {
            rec.clear();
            base = a[i];
        }

        if (a[i] >= a[i - 1])
        {
            for (auto j : rec[a[i]])
            {
                ans = max(ans, i - j);
            }
            rec[a[i]].push_back(i);
        }
        else
        {
            for (auto j : rec[a[i]])
            {
                ans = max(ans, i - j);
            }
            rec[a[i]].push_back(i);

            // front = i;
            // base = a[i];
        }
    }
    cout << ans;

    return 0;
}