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
    int tmp = max(1, (int)ceil(sqrt(n - 2)) + 1);
    map<int, int> f;
    int x = 0, y = 0, z = 0;
    for (x = 1; x <= tmp; x++)
    {
        for (y = 1; y <= tmp; y++)
        {
            for (z = 1; z <= tmp; z++)
            {
                int ans = x * x + y * y + z * z + x * y + y * z + z * x;
                f[ans]++;
            }
        }
    }
    for (int i = 1; i <= n; i++)
        cout << f[i] << "\n";

    return 0;
}