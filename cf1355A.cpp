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
    int T;
    cin >> T;
    while (T--)
    {
        ll a, k, aa;
        cin >> a >> k;
        k--;
        while (k--)
        {
            int maxd = -1, mind = 10, t = 0;
            for (ll i = a; i; i /= 10)
            {
                maxd = max(maxd, int(i % 10));
                mind = min(mind, int(i % 10));
            }
            if (mind * maxd == 0)
                break;
            a += mind * maxd;
        }
        cout << a << "\n";
    }
    return 0;
}