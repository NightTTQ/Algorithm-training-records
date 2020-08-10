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
        int n, m, ans = 0;
        cin >> n >> m;
        char c[m][n];
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                cin >> c[j][i];
        for (int i = 0; i < n; i++)
            if (c[m - 1][i] == 'R')
                ans++;
        for (int i = 0; i < m; i++)
            if (c[i][n - 1] == 'D')
                ans++;
        cout << ans << "\n";
    }
    return 0;
}
