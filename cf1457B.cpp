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
        int ans = INT_MAX;

        ll n, k;
        cin >> n >> k;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 1; i <= 100; i++)
        {
            bool st = false;
            int now = 0;
            int opt = 0;
            for (int j = 0; j < n; j++)
            {
                if (st)
                {
                    now++;
                    if (now == k)
                    {
                        now = 0;
                        opt++;
                        st = false;
                    }
                }
                else if (a[j] == i)
                {
                    if (now)
                        opt++;
                    now = 0;
                }
                else
                {
                    st = true;
                    now++;
                    if (now == k)
                    {
                        now = 0;
                        opt++;
                        st = false;
                    }
                }
            }
            if (now)
                opt++;
            ans = min(ans, opt);
        }
        cout << ans << "\n";
    }
    return 0;
}