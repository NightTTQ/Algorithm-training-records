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
    int n, m, x, y;
    cin >> n >> m >> x >> y;
    {
        int yy = y;
        for (int xx = x; xx >= 1; xx--)
            cout << xx << " " << yy << "\n";
        for (int xx = x + 1; xx <= n; xx++)
            cout << xx << " " << yy << "\n";
        //特殊处理第一行
    }
    int isr = 1;
    for (int yy = y + 1; yy <= m; yy++)
    {
        for (int xx = n; xx >= 1; xx--)
            cout << xx << " " << yy << "\n";
        yy++;
        isr = 0;
        if (yy > m)
            break;
        for (int xx = 1; xx <= n; xx++)
            cout << xx << " " << yy << "\n";
        isr = 1;
    }
    if (isr)
    {
        for (int yy = 1; yy < y; yy++)
        {
            for (int xx = n; xx >= 1; xx--)
                cout << xx << " " << yy << "\n";
            yy++;
            isr = 0;
            if (yy >= y)
                break;
            for (int xx = 1; xx <= n; xx++)
                cout << xx << " " << yy << "\n";
            isr = 1;
        }
    }
    else
    {
        for (int yy = 1; yy < y; yy++)
        {
            for (int xx = 1; xx <= n; xx++)
                cout << xx << " " << yy << "\n";

            yy++;
            isr = 1;
            if (yy >= y)
                break;

            for (int xx = n; xx >= 1; xx--)
                cout << xx << " " << yy << "\n";

            isr = 0;
        }
    }
    return 0;
}
