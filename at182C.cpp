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
    string s;
    cin >> s;

    int one = 0, two = 0, sum = 0;
    for (auto i : s)
    {
        if ((i - '0') % 3 == 1)
            one++;
        else if ((i - '0') % 3 == 2)
            two++;
        sum += (i - '0');
    }

    int ans = 0;
    if (sum % 3 == 1)
    {
        if (one && s.length() > 1)
            ans = 1;
        else if (two && s.length() > 2)
            ans = 2;
        else
            ans = -1;
    }
    else if (sum % 3 == 2)
    {
        if (two && s.length() > 1)
            ans = 1;
        else if (one >= 2 && s.length() > 2)
            ans = 2;
        else
            ans = -1;
    }
    cout << ans;
    return 0;
}