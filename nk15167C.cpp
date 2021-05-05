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

map<ll, ll> num;
map<pair<int, int>, ll> all;

ll getValue(int n, int k)
{
    if (all[make_pair(n, k)] == 0)
    {
        num.clear();
        for (int x = -n; x <= n; x++)
            for (int y = -n; y <= n; y++)
                num[x * (x + 1) + y * (y + 1)]++;

        for (int x = -n; x <= n; x++)
            for (int y = -n; y <= n; y++)
                all[make_pair(n, k)] += num[k * (x * (x + 1) + y * (y + 1))];
    }
    return all[make_pair(n, k)];
}

int main()
{
    fast_io();
    int T;
    cin >> T;
    while (T--)
    {
        int n, k;
        cin >> n >> k;
        cout << getValue(n, k) << "\n";
    }
    return 0;
}