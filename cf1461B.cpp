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
int n, m;
char c[501][501];
int checked = 0;

bool check(int x, int y)
{
    // checked++;
    // cout << "(" << x << "," << y << ") " << c[y][x] << "\n";
    if (x >= 0 && x <= m - 1 && y >= 0 && y <= n - 1)
        if (c[y][x] == '*')
            return true;
    return false;
}

int main()
{
    fast_io();
    int T;
    cin >> T;
    while (T--)
    {
        ll ans = 0;

        cin >> n >> m;

        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
            {
                cin >> c[i][j];
                if (c[i][j] == '*')
                    ans++;
            }
        // if((m+1)/2)
        int op = min((m) / 2, n);
        //最大左右检测格数op
        for (int nop = 1; nop <= op; nop++)
        {
            //从最小的格式开始检测

            bool itis = false;
            for (int y = nop; y < n; y++)
                for (int x = nop; x < m - nop; x++)
                {
                    //控制检测位点
                    itis = true;
                    //开始检测
                    for (int tnop = nop; tnop >= 0; tnop--)
                    {
                        //控制当前需要检测的左右格数，从底部开始
                        //控制检测横行，从底下往上检测
                        int yy = y - nop + tnop;
                        if (!itis)
                            break;
                        //控制检测x值，从左往右
                        for (int xx = x - tnop; xx <= x + tnop; xx++)
                        {
                            if (check(xx, yy) == false)
                            {
                                itis = false;
                                break;
                            }
                        }
                    }
                    if (itis)
                        ans++;
                }
        }
        cout << ans << "\n";
        // cout << checked;
    }
    return 0;
}