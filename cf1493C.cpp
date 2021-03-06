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

string add(string s)
{
    s[s.length() - 1] += 1;
    for (int i = s.length() - 1; i >= 0; i--)
    {
        if (s[i] > 'z')
        {
            s[i] = 'a';
            if (i > 0)
            {
                s[i - 1] += 1;
                if (s[i - 1] <= 'z')
                    break;
            }
            else
                return "-1";
        }
    }
    return s;
}

int main()
{
    fast_io();
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;

        bool flag = true;
        do
        {
            flag = true;
            map<char, int> all;
            for (auto i : s)
                all[i]++;
            for (auto i : all)
                if (i.second % k)
                {
                    flag = false;
                    break;
                }
            if (!flag)
                s = add(s);
            if (s == "-1")
                break;
        } while (!flag);
        if (s != "-1")
            cout << s << "\n";
        else
            cout << "-1\n";
    }
    return 0;
}