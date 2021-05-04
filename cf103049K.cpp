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
#define N 1000007
typedef long long ll;
typedef long double ld;
using namespace std;

int main()
{
    fast_io();
    string s1, s2;
    set<char> ans;
    getline(cin, s1);
    // cin >> s2;
    getline(cin, s2);
    int i = 0, j = 0;
    while (i <= s1.length() && j <= s2.length())
    {
        if (s1[i] == s2[j])
        {
            i++, j++;
            continue;
        }
        if (s1[i] != s2[j])
        {
            if (s2[j] == s1[i - 1])
            {
                ans.insert(s2[j]);
                char c = s2[j];
                j++;
                continue;
            }
        }
    }
    for (auto i : ans)
        cout << i;

    return 0;
}