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
        int n, x;
        cin >> n >> x;
        vector<int> a(n);
        vector<int> b(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n; i++)
            cin >> b[i];

        string line;
        getline(cin, line);
        sort(a.begin(), a.end());
        sort(b.rbegin(), b.rend());

        bool flag = true;

        for (int i = 0; i < a.size(); i++)
            if (a[i] + b[i] > x)
            {
                cout << "No\n";
                flag = false;
                break;
            }

        if (flag)
            cout << "Yes\n";
    }
    return 0;
}