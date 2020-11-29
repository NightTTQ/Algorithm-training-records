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
    string s;
    cin >> n >> s;
    int l = 0, r = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '(')
            l++;
        else if (s[i] == ')' && l > 0)
            l--;
        else if (s[i] == ')' && l == 0)
            r++;
    }
    if (n % 2)
        cout << "-1";
    else
    {
        if (l % 2 && r % 2)
            cout << (l + r) / 2 + 1;
        else
            cout << (l + r) / 2;
    }

    return 0;
}