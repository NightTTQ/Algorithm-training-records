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
    int n;
    cin >> n;
    string s;
    int ans = 0;
    int c = 0, a = 0, t = 0, ca = 0, at = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> s;
        if (s.substr(s.length() - 1, 1) == "c")
            c++;
        if (s == "a")
            a++;
        if (s.length() >= 2 && s.substr(s.length() - 2, 2) == "ca")
            ca++;
        if (s.find("cat") != s.npos)
            ans++;
        if (s.substr(0, 1) == "t")
            t++;
        if (s.length() >= 2 && s.substr(0, 2) == "at")
            at++;
    }
    ans += min(t, ca);
    t -= min(t, ca);
    ans += min({c, a, t});
    c -= min({c, a, t});
    ans += min(c, at);
    cout << ans;

    return 0;
}