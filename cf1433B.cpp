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
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        int l = -1, r = n, ans = 0;
        for (int i = 0; i < n; i++)
            if (a[i])
            {
                l = i;
                break;
            }
        for (int i = n - 1; i >= 0; i--)
            if (a[i])
            {
                r = i;
                break;
            }
        if (r == l || l == -1 || r == n)
            cout << "0\n";
        else
        {
            for (int i = l; i <= r; i++)
                if (!a[i])
                    ans++;
            cout << ans << "\n";
        }
    }
    return 0;
}
