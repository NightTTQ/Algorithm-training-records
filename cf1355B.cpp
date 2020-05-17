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
        int n;
        cin >> n;
        int e[n];
        for (int i = 0; i < n; i++)
            cin >> e[i];
        sort(e, e + n);
        int peo = 0, ans = 0;
        for (int i = 0; i < n; i++)
        {
            peo++;
            if (e[i] <= peo)
            {
                peo = 0;
                ans++;
                continue;
            }
        }
        cout << ans << "\n";
    }
    return 0;
}