//#include <bits/stdc++.h>
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
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
    map<char, int> all;
    all['a'] = all['b'] = all['c'] = 2;
    all['d'] = all['e'] = all['f'] = 3;
    all['g'] = all['h'] = all['i'] = 4;
    all['j'] = all['k'] = all['l'] = 5;
    all['m'] = all['n'] = all['o'] = 6;
    all['p'] = all['q'] = all['r'] = all['s'] = 7;
    all['t'] = all['u'] = all['v'] = 8;
    all['w'] = all['x'] = all['y'] = all['z'] = 9;
    int T;
    cin >> T;
    while (T--)
    {
        int n, m;
        cin >> n >> m;
        vector<string> sm(m);
        vector<int> sn(n), ss(m);
        for (int i = 0; i < n; i++)
            cin >> sn[i];
        for (int i = 0; i < m; i++)
        {
            cin >> sm[i];
            for (int j = 0; j < sm[i].length(); j++)
                ss[i] = ss[i] * 10 + all[sm[i][j]];
        }
        for (int i = 0; i < n; i++)
        {
            int cnt = 0;
            for (int j = 0; j < m; j++)
                if (ss[j] == sn[i])
                    cnt++;
            cout << cnt << "\n";
        }
    }
    return 0;
}