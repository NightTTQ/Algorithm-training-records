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
    string str = "abacaba";
    int T;
    cin >> T;
    while (T--)
    {
        int n, fix = 0, row = 0;
        string s;
        cin >> n;
        cin >> s;
        if (n < 7)
        {
            cout << "No\n";
            continue;
        }
        for (int i = 0; i <= s.length() - str.length(); i++)
        {
            if (s[i] == 'a' && s[i + 1] == 'b' && s[i + 2] == 'a' &&
                s[i + 3] == 'c' && s[i + 4] == 'a' && s[i + 5] == 'b' &&
                s[i + 6] == 'a')
                row++;
        }
        if (row == 1)
        {
            cout << "Yes\n";
            for (auto i : s)
                if (i == '?')
                    cout << "t";
                else
                    cout << i;
            cout << "\n";
            continue;
        }
        else if (row > 1)
        {
            cout << "No\n";
            continue;
        }
        for (int i = 0; i <= s.length() - str.length(); i++)
        {
            if ((s[i] == 'a' || s[i] == '?') &&
                (s[i + 1] == 'b' || s[i + 1] == '?') &&
                (s[i + 2] == 'a' || s[i + 2] == '?') &&
                (s[i + 3] == 'c' || s[i + 3] == '?') &&
                (s[i + 4] == 'a' || s[i + 4] == '?') &&
                (s[i + 5] == 'b' || s[i + 5] == '?') &&
                (s[i + 6] == 'a' || s[i + 6] == '?'))
            {
                s[i] = 'a', s[i + 1] = 'b', s[i + 2] = 'a', s[i + 3] = 'c',
                s[i + 4] = 'a', s[i + 5] = 'b', s[i + 6] = 'a';
                fix++;
                break;
                cout << "Yes\n";
                for (auto i : s)
                    if (i == '?')
                        cout << "t";
                    else
                        cout << i;
                cout << "\n";
                break;
            }
        }
        row = 0;
        for (int i = 0; i <= s.length() - str.length(); i++)
        {
            if (s[i] == 'a' && s[i + 1] == 'b' && s[i + 2] == 'a' &&
                s[i + 3] == 'c' && s[i + 4] == 'a' && s[i + 5] == 'b' &&
                s[i + 6] == 'a')
                row++;
        }

        if (row == 1)
        {
            cout << "Yes\n";
            for (auto i : s)
                if (i == '?')
                    cout << "t";
                else
                    cout << i;
            cout << "\n";
            continue;
        }
        else if (row > 1)
        {
            cout << "No\n";
            continue;
        }
        if (row <= 1 && fix == 1)
        {
            cout << "Yes\n";
            for (auto i : s)
                if (i == '?')
                    cout << "t";
                else
                    cout << i;
            cout << "\n";
            break;
        }
        if (row == 0 && fix == 0)
            cout << "No\n";
    }
    return 0;
}