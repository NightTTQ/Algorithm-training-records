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
    int n;
    string T;
    cin >> n >> T;
    for (auto i : T)
        if (i != '1' && i != '0')
        {
            cout << "0";
            return 0;
        }
    const string s = "110";
    int sl = 0, Tl = 0;
    int l = -1, r = -1, front = 0, tried = 0;
    if (n == 1)
    {
        if (T == "1")
        {
            cout << "20000000000";
            return 0;
        }
        else if (T == "0")
        {
            cout << "10000000000";
            return 0;
        }
        else
        {
            cout << "0";
            return 0;
        }
    }
    if (n == 2)
    {
        if (T == "11")
        {
            cout << "10000000000";
            return 0;
        }
        else if (T == "10")
        {
            cout << "10000000000";
            return 0;
        }
        else if (T == "01")
        {
            cout << "999999999";
            return 0;
        }
        else
        {
            cout << "0";
            return 0;
        }
    }
    while (Tl < n)
    {
        sl = sl % 3;
        if (T[Tl] == s[sl])
        {
            if (l == -1)
            {
                l = Tl;
                front = sl;
            }

            r = Tl;
            Tl++;
            sl++;
            continue;
        }
        else
        {
            l = -1;
            // sl++;
            tried++;
            if (tried >= 3)
            {
                cout << "0";
                return 0;
            }
            sl = tried;
            Tl = 0;
        }
    }
    cout << 10000000000 - (tried + n) / 3 - ((n % 3) != 0) + 1;
    // cout << 10000000000 - (front != 0) - n / 3 + 1 - ((n % 3) != 0);
    return 0;
}