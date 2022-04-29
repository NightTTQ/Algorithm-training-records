//#include <bits/stdc++.h>
#include <algorithm>
#include <cctype>
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
        vector<string> a(n), b(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n; i++)
            cin >> b[i];
        vector<int> aa(n), bb(n);
        for (int i = 0; i < n; i++)
        {
            if (a[i][a[i].length() - 1] == '1' ||
                a[i][a[i].length() - 1] == '2')
                aa[i] = 1;
            else
                aa[i] = 2;
            if (b[i][b[i].length() - 1] == '1' ||
                b[i][b[i].length() - 1] == '2')
                bb[i] = 1;
            else
                bb[i] = 2;
        }
        if (aa[n - 1] != 2)
        {
            cout << "NO\n";
            continue;
        }
        bool ok = true;
        for (int i = 0; i < n; i++)
        {
            if (aa[i] == bb[i])
            {
                cout << "NO\n";
                ok = false;
                break;
            }
        }
        if (ok)
            cout << "YES\n";
    }
}