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

int main()
{
    fast_io();
    vector<long> table(1e6 + 1);
    for (long i = 2; i <= 1e6 + 1; i++)
        if (table[i] == 0)
            for (long j = i; j < 1e6 + 1; j += i)
                if (table[j] == 0)
                    table[j] = i;
    ll T, n, k;
    cin >> T;
    while (T--)
    {
        cin >> n >> k;
        n += table[n];
        k--;
        n += 2 * k;
        cout << n << "\n";
    }
    return 0;
}