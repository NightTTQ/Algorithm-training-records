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
        bool flag;
        for (int i = 0; i < n; i++)
        {
            int t = a[i];

            int l = i - 1, r = i + 1;
            bool lok = false, rok = false;
            do
            {
                flag = false;
                if (l >= 0)
                    lok = true;
                if (r < n)
                    rok = true;

                if (lok)
                {
                    if (a[l] < t)
                    {
                        l--;
                        t++;
                        flag = true;
                    }
                }
                if (rok)
                {
                    if (a[r] < t)
                    {
                        r++;
                        t++;
                        flag = true;
                    }
                }
                if (!rok && !lok)
                {
                    cout << i + 1 << "\n";
                    break;
                }
            } while (flag);
        }
        if (!flag)
            cout << "-1\n";
    }
    return 0;
}