//#include <bits/stdc++.h>
#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <cmath>
#include <iomanip>
#define fast_io()                \
    ios::sync_with_stdio(false); \
    std::cin.tie(0);
typedef long long ll;
typedef long double ld;
using namespace std;
int c[40001][40001];
inline bool is(int x,int y,int d,int k)
{
    for (int i = x; i <= x + d;i++)
        for (int j = y; j <= y + k; j++)
        {
            if(c[i][j]==0)
                return false;
        }
    return true;
}
int main()
{
    int n, m, k, ans = 0;
    int a[40001], b[40001];
    cin >> n >> m >> k;
    for (int i = 1; i <= n;i++)
    {
        cin >> a[i];
        for (int j = 1; j <= n;j++)
            c[j][i] = a[i];
    }

    for (int i = 1; i <= m;i++)
    {
        cin >> b[i];
        for (int j = 1; j <= n;j++)
            c[i][j] *= b[i];
    }
    
    for (int i = 1; i <= k; i++)
    {
        int j = k / i;
        if(j*i==k)
        {
            for (int k = 1; k <= n - i + 1; k++)
                for (int l = 1; l <= m - j + 1;l++)
                    if(is(k, l, i, j))
                        ans++;
        }
        else
            continue;
    }
    cout << ans;
}
