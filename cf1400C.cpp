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
        string s;
        cin >> s;
        ll x;
        cin >> x;
        ll ans[s.length()];
        for (ll i = 0; i < s.length(); i++)
        {
            if (s[i] == '0')
            {
                if (i - x >= 0)
                    ans[i - x] = -1;
                if (i + x <= s.length())
                    ans[i + x] = -1;
                // s[i] = '1';
            }
        }
        for (ll i = 0; i < s.length(); i++)
            if (ans[i] == -1)
                cout << "0";
            else
                cout << "1";
        cout << "\n";
    }
    return 0;
}
