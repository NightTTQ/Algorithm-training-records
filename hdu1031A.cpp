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
#include <utility>
#include <vector>
#define fast_io()                \
    ios::sync_with_stdio(false); \
    std::cin.tie(0);
#define mod 1000000007
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
        int n;
        cin >> n;
        map<pair<int, int>, int> mp;
        ll ans = 0;
        for (int i = n + 1;; i++)
        {
            if (i % 2 == 0 && i / 2 <= n)
                ans++;
            else if (i / 2 > n && i % 2 == 0)
                break;
        }
        for (int i = 1; i <= n; i++)
        {
            if (i % 2 && i * 3 + 1 > n)
                ans++;
        }
        cout << ans << "\n\n";
    }
    return 0;
}