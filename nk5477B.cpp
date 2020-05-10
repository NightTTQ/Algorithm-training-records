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
    string s, ss;
    vector<string> str;
    vector<int> n, x, a;
    cin >> s;
    double ans = 0;
    int up = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '+')
        {
            str.push_back(s.substr(up, s.length() - up + 1));
            up = i + 1;
        }
    }
    str.push_back(s.substr(up, s.length()));
    for (string ss : str)
    {
        bool flag = false;
        for (int i = 0; i < ss.length(); i++)
        {
            if (ss[i] == 'd')
            {
                n.push_back(atoi(ss.c_str()));
                x.push_back(
                    atoi(ss.substr(i + 1, ss.length() - i - 1).c_str()));
                flag = true;
                break;
            }
        }
        if (!flag)
            a.push_back(atoi(ss.c_str()));
    }
    for (auto i : a)
        ans += i;
    for (int i = 0; i < n.size(); i++)
    {
        ans += (double)n[i] * ((double)(1 + x[i]) / 2.0);
    }
    cout << ans;
    return 0;
}