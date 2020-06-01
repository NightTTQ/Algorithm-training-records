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
    fast_io();
    int T;
    int a[11][11];
    memset(a, 0, sizeof(a));
    for (int i = 0; i <= 10; i++)
        a[0][i] = a[i][0] = 1;
    cin >> T;
    while (T--)
    {
        int id, x;
        cin >> id >> x;
        if (id == 1)
        {
            for (int i = 10; i >= 1; i--)
                if (a[x][i - 1] || a[x + 1][i - 1])
                {
                    a[x][i] = a[x + 1][i] = a[x][i + 1] = a[x + 1][i + 1] = 1;
                    break;
                }
        }
        if (id == 2)
        {
            for (int i = 10; i >= 1; i--)
                if (a[x][i - 1] || a[x + 1][i - 1] || a[x + 2][i - 1])
                {
                    a[x][i] = a[x + 1][i] = a[x + 2][i] = a[x][i + 1] = 1;
                    break;
                }
        }
        if (id == 3)
        {
            for (int i = 10; i >= 1; i--)
                if (a[x][i - 1] || a[x + 1][i - 1] || a[x + 2][i - 1] ||
                    a[x + 3][i - 1])
                {
                    a[x][i] = a[x + 1][i] = a[x + 2][i] = a[x + 3][i] = 1;
                    break;
                }
        }
        if (id == 4)
        {
            for (int i = 10; i >= 1; i--)
                if (a[x][i - 1] || a[x + 1][i - 1] || a[x + 2][i - 1])
                {
                    a[x][i] = a[x + 1][i] = a[x + 2][i] = a[x + 1][i + 1] = 1;
                    break;
                }
        }
    }
    for (int i = 10; i >= 1; i--)
    {
        for (int j = 1; j <= 10; j++)
            cout << a[j][i] << " ";
        cout << "\n";
    }

    return 0;
}