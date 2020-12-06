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
        int n, m;
        cin >> n >> m;
        set<int> a;
        int t;
        for (int i = 0; i < n; i++)
        {
            cin >> t;
            a.insert(t);
        }
        int ans = 0;
        for (int i = 0; i < m; i++)
        {
            cin >> t;
            if (a.find(t) != a.end())
                ans++;
        }
        cout << ans << "\n";
    }
    return 0;
}