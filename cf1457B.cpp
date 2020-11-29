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
        int now;
        map<int, int> num;
        ll n, k;
        cin >> n >> k;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            num[a[i]]++;
        }
        int last = 0;
        map<int, int>::reverse_iterator it;
        for (auto it = num.rbegin(); it != num.rend(); it++)
        {
            int opt = 0;
            now = 0;
            int t = 0;
            for (int j = 0; j <= n - k; j++)
            {
                t = 0;
                for (int l = 0; l < k; l++)
                {
                    if (a[j + l] != it->first)
                        t++;
                }
                if (t == k)
                {
                    opt++;
                    now += k;
                    j += k - 1;
                    last = 0;
                }
                else if (t < last)
                {
                    opt++;
                    now += last;
                    j += k - 2;
                    last = 0;
                }
                else
                    last = t;
            }
            if (last)
                opt++;
            if (opt < ans)
                ans = opt;
        }
        cout << ans << "\n";
    }
    return 0;
}