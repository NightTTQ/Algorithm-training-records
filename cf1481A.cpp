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
        int px, py;
        cin >> px >> py;
        string s;
        cin >> s;
        int u, d, r, l;
        u = d = r = l = 0;
        for (auto i : s)
        {
            if (i == 'U')
                u++;
            if (i == 'D')
                d++;
            if (i == 'R')
                r++;
            if (i == 'L')
                l++;
        }
        if (px > 0)
        {
            if (py > 0)
            {
                if (u >= py && r >= px)
                    cout << "YES\n";
                else
                    cout << "NO\n";
            }
            if (py < 0)
            {
                if (d >= abs(py) && r >= px)
                    cout << "YES\n";
                else
                    cout << "NO\n";
            }
        }
        else
        {
            if (py > 0)
            {
                if (u >= py && l >= abs(px))
                    cout << "YES\n";
                else
                    cout << "NO\n";
            }
            if (py < 0)
            {
                if (d >= abs(py) && l >= abs(px))
                    cout << "YES\n";
                else
                    cout << "NO\n";
            }
        }
    }
    return 0;
}