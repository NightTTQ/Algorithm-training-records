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
        int n;
        cin >> n;
        map<int, int> bis;
        int m = 0;
        for (int i = 0; i < n; i++)
        {
            int t;
            cin >> t;
            bis[t]++;
            m = max(m, bis[t]);
        }
        int cnt = 0, tt = 0;
        for (auto i : bis)
            if (i.second >= m - 1)
                cnt++;
            else
                tt += i.second;
        cout << cnt - 1 + tt / (m - 1) << "\n";
    }
    return 0;
}
