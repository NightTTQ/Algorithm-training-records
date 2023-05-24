//#include <bits/stdc++.h>
#include <algorithm>
#include <cctype>
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
    int m, n;
    cin >> m >> n;
    int grid[m][n];
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            cin >> grid[i][j];

    int dp[m][n];
    dp[0][0] = grid[0][0];
    for (int i = 1; i < m; i++)
        dp[i][0] = dp[i - 1][0] + grid[i][0];
    for (int i = 1; i < n; i++)
        dp[0][i] = dp[0][i - 1] + grid[0][i];
    for (int i = 1; i < m; i++)
        for (int j = 1; j < n; j++)
            dp[i][j] = min(dp[i - 1][j], dp[i][j - 1]) + grid[i][j];

    cout << dp[m - 1][n - 1];
}