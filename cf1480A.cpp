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
        for (int i = 0; i < s.length(); i += 2)
        {
            if (i + 1 <= s.length() - 1)
            {
                if (s[i] != 'a')
                    s[i] = 'a';
                else
                    s[i] = 'b';
                if (s[i + 1] != 'z')
                    s[i + 1] = 'z';
                else
                    s[i + 1] = 'y';
            }
            else
            {
                if (s[i] != 'a')
                    s[i] = 'a';
                else
                    s[i] = 'b';
                break;
            }
        }
        cout << s << "\n";
    }

    return 0;
}