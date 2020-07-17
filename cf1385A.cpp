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
    int T;
    cin >> T;
    while (T--)
    {
        int x, y, z, cnt = 0;
        cin >> x >> y >> z;
        int max = std::max(x, std::max(y, z));
        if (x == max)
            cnt++;
        if (y == max)
            cnt++;
        if (z == max)
            cnt++;
        if (cnt == 1)
        {
            cout << "NO\n";
            continue;
        }
        if (cnt == 2)
        {
            cout << "YES\n";
            cout << max << " " << std::min(x, std::min(y, z)) << " "
                 << std::min(x, std::min(y, z)) << "\n";
            continue;
        }
        if (cnt == 3)
        {
            cout << "YES\n";
            cout << max << " " << max << " " << max << "\n";
            continue;
        }
    }
    return 0;
}