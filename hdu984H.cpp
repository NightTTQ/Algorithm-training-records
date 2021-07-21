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
const int N = 5e3;
int all[N][N];
bool mp[N][N];
int h[N];
int que[N];

int main()
{
    fast_io();
    int T;
    cin >> T;
    while (T--)
    {
        int n, m;
        cin >> n >> m;

        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= m; j++)
            {
                cin >> all[i][j];
                mp[i][j] = 0;
                if (i > 1)
                    mp[i][j] = (all[i][j] >= all[i - 1][j]);
            }
        }

        for (int i = 1; i <= m; i++)
            h[i] = 0;

        int ans = 0;
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= m; j++)
            {
                if (mp[i][j] == 0)
                    h[j] = 1;
                else
                    h[j]++;
            }
            int tot = 0;
            h[m + 1] = 0;
            for (int j = 1; j <= m + 1; j++)
            {
                while (tot && h[que[tot]] > h[j])
                {
                    ans = max(ans, (j - que[tot - 1] - 1) * h[que[tot]]);
                    tot--;
                }
                que[++tot] = j;
            }
        }
        cout << ans << "\n";
    }
}
/*
1
10 5
1 1 1 1 1
2 0 0 0 1
9 9 9 9 9
8 7 6 8 7
5 8 7 3 5
6 9 2 5 8
7 5 3 5 6
8 1 4 8 5
9 0 3 7 4
1 5 5 5 5


*/