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
        int n;
        string s;
        bool flag = true;
        int T = 0, M = 0;
        cin >> n >> s;
        for (auto i : s)
        {
            if (i == 'T')
                T++;
            else if (i == 'M')
                M++;
            else
            {
                flag = false;
                break;
            }

            if (M > T)
            {
                flag = false;
                break;
            }
        }
        int TT = 0, MM = 0;
        if (flag)
            for (int i = n - 1; i >= 0; i--)
            {
                if (s[i] == 'T')
                    TT++;
                else if (s[i] == 'M')
                    MM++;
                else
                {
                    flag = false;
                    break;
                }

                if (MM > TT)
                {
                    flag = false;
                    break;
                }
            }
        if (M * 2 == T && MM * 2 == TT && flag && M + T == n && MM + TT == n)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}