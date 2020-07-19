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
        int a[3];
        ll n, m;
        cin >> n >> m;
        for (int i = 0; i < m; i++)
            cin >> a[i];
        if (n == 1)
            cout << "1\n";
        else if (n == 2)
            cout << "-1\n";
        else
        {
            if (m == 2 && a[0] == 1 && a[1] == 2)
                cout << "1\n";
            else if (m == 2 && a[0] == n - 1 && a[1] == n)
                cout << n << "\n";
            else
                cout << a[1] << "\n";
        }
    }
    return 0;
}