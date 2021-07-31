// submitted by HNUST025
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
#define mod 1000000007
typedef long long ll;
typedef long double ld;
using namespace std;

int main()
{
    fast_io();
    int n, m;
    cin >> n >> m;
    int a[n + 5][m + 5];
    int flag = 0;
    for (int i = 0; i < m; i += 2)
    {
        if (flag == 0)
            a[0][i] = 1, a[0][i + 1] = 1, flag = 1;
        else
            a[0][i] = 0, a[0][i + 1] = 0, flag = 0;
    }
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            a[i][j] = 1 - a[i - 1][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            cout << a[i][j];
        cout << "\n";
    }
    return 0;
}