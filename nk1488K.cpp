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
    int n, m;
    cin >> n >> m;
    vector<int> a(n + 1);
    vector<int> big(n);
    vector<int> small(n);
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        big[i - 1] = a[i] + i * m;
        small[i - 1] = a[i] - i * m;
    }
    sort(big.begin(), big.end());
    sort(small.begin(), small.end());
    cout << big[n - 1] - small[0];

    return 0;
}