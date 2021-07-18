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
#define mod 1000000007
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
        vector<int> a, b;
        int n;
        cin >> n;
        int nn = n;
        for (int i = 0; i < n; i++)
        {
            int t;
            cin >> t;
            a.push_back(t);
        }
        for (int i = 0; i < n; i++)
        {
            int t;
            cin >> t;
            b.push_back(t);
        }
        int ans = 0;
        ll A = 0, B = 0;
        int cnt = n - n / 4;
        int now = cnt;
        int ia = cnt - 1, ib = cnt;
        sort(a.rbegin(), a.rend());
        sort(b.rbegin(), b.rend());
        for (int i = 0; i < cnt; i++)
        {
            A += a[i];
            B += b[i];
        }
        while (A < B)
        {
            n++;
            now = n - n / 4;
            if (now == cnt)
            {
                if (ia >= 0)
                    A = A - a[ia--] + 100;
                else
                    A += 0;
            }
            else
            {
                A += 100;
                if (ib < nn)
                    B += b[ib++];
            }
            ans++;
            cnt = now;
        }
        cout << ans << "\n";
    }
    return 0;
}