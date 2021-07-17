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
int h, w;
int ans[23][23];

bool check(int x, int y)
{
    if (ans[x][y] == 1)
        return false;
    if (x != 1 && x != h && y != 1 && y != w)
        return false;
    for (int i = -1; i <= 1; i++)
        for (int j = -1; j <= 1; j++)
            if (ans[x + i][y + j] == 1)
                return false;
    return true;
}

int main()
{
    fast_io();
    int T;
    cin >> T;
    while (T--)
    {
        cin >> h >> w;
        memset(ans, 0, sizeof(ans));
        for (int i = 1; i <= h; i++)
            for (int j = 1; j <= w; j++)
                if (check(i, j))
                    ans[i][j] = 1;
                else
                    ans[i][j] = 0;

        for (int i = 1; i <= h; i++)
        {
            for (int j = 1; j <= w; j++)
                cout << ans[i][j];
            cout << "\n";
        }
    }
    return 0;
}