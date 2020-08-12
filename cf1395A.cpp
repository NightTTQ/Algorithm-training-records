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
        int r, g, b, w;
        int odd = 0;
        cin >> r >> g >> b >> w;
        if (r % 2)
            odd++;
        if (g % 2)
            odd++;
        if (b % 2)
            odd++;
        if (w % 2)
            odd++;
        if (odd <= 1)
        {
            cout << "Yes\n";
            continue;
        }
        if (r && g && b)
        {
            r--, g--, b--;
            w += 3;
            odd = 0;
            if (r % 2)
                odd++;
            if (g % 2)
                odd++;
            if (b % 2)
                odd++;
            if (w % 2)
                odd++;
            if (odd <= 1)
            {
                cout << "Yes\n";
                continue;
            }
            cout << "No\n";
            continue;
        }
        cout << "No\n";
    }
    return 0;
}
