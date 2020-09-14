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

int cmp(int a, int b)
{
    return a > b;
}

int main()
{
    fast_io();
    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        bool isme = false;
        ll ans = 0;
        for (int i = 0; i < n; i++)
        {
            if (!isme)
            {
                isme = true;
                if (a[i])
                    ans++;
                if ((i + 1) < n && !a[i + 1])
                    i++;
            }
            else
            {
                isme = false;
                if ((i + 1) < n && a[i + 1])
                    i++;
                else if ((i + 2) < n && !a[i + 2])
                    i++;
            }
        }
        cout << ans << "\n";
    }
    return 0;
}
