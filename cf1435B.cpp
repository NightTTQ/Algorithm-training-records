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
        int n, m;
        cin >> n >> m;
        int a[m][n], b[n][m];
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                cin >> a[j][i];
        for (int i = 0; i < m; i++)
            for (int j = 0; j < n; j++)
                cin >> b[j][i];

        vector<int> ans;

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                for (int k = 0; k < n; k++)
                {
                    if (b[i][0] == a[j][k])
                    {
                        ans.push_back(k);
                        break;
                    }
                }
            }
        }

        for (int i = 0; i < ans.size(); i++)
        {
            for (int j = 0; j < m; j++)
                cout << a[j][ans[i]] << " ";
            cout << "\n";
        }
    }
    return 0;
}