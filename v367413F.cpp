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
    int n, m;
    map<string, int> name;
    while (cin >> n)
    {
        string s;
        int money[10001];
        memset(money, 0, sizeof(money));
        for (int i = 1; i <= n; i++)
        {
            cin >> s;
            name[s] = i;
        }
        cin >> m;
        int t;
        string str;
        for (int i = 1; i <= m; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                cin >> t >> str;
                money[name[str]] += t;
            }
            int k = 0;
            for (int j = 1; j <= n; j++)
                if (j != name["memory"] && money[j] > money[name["memory"]])
                    k++;
            cout << k + 1 << "\n";
        }
    }

    return 0;
}