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
    int i, n, m, j, k, x, y;
    bool flag;
    cin >> n >> m;
    int a[n], b[m];
    for (j = 0; j < n; j++)
    {
        cin >> a[j];
    }
    for (j = 0; j < m; j++)
    {
        cin >> b[j];
    }
    for (i = 0; i < 512; i++)
    {
        y = 0;
        for (j = 0; j < n; j++)
        {
            flag = 0;
            for (k = 0; k < m; k++)
            {
                x = (a[j] & b[k]);
                if (i == (x | i))
                    flag = 1;
            }
            if (flag == 1)
                y = y + 1;
        }
        if (y == n)
            break;
    }
    cout << i;
    return 0;
}