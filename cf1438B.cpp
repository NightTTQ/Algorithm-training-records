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
        vector<int> b(n), a(n);
        set<int> all;
        bool flag = false;
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
            if (all.find(b[i]) == all.end())
                all.insert(b[i]);
            else
                flag = true;
            a[i] = 2 * b[i];
        }
        if (flag)
            cout << "YES\n";
        else
            cout << "NO\n";

        // cout << "\n";
    }
    return 0;
}