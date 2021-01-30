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
    int n, m;
    cin >> n >> m;
    vector<int> a(m), b(m);
    for (int i = 0; i < m; i++)
        cin >> a[i] >> b[i];
    int k;
    cin >> k;
    vector<int> c(k), d(k);
    for (int i = 0; i < k; i++)
        cin >> c[i] >> d[i];
    int ans = 0;
    for (int i = 0; i < (1 << k); i++)
    {
        int cnt = 0;
        vector<int> p(n);
        for (int j = 0; j < k; j++)
        {
            if (i & (1 << j))
            {
                p[c[j] - 1]++;
            }
            else
            {
                p[d[j] - 1]++;
            }
        }
        for (int t = 0; t < m; t++)
        {
            if (p[a[t] - 1] && p[b[t] - 1])
            {
                cnt++;
            }
        }
        if (cnt > ans)
            ans = cnt;
    }
    cout << ans;
    return 0;
}