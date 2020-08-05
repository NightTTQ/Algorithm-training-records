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
    bool isin = false;
    ll ans = 0, sum = 0, up = 0, com = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (isin)
        {
            if (s[i] == 'C')
                sum += 13, up = 13;
            if (s[i] == 'H')
                sum += 1, up = 1;
            if (s[i] == 'O')
                sum += 17, up = 17;
            if (s[i] >= '0' && s[i] <= '9')
                com *= 10, com += s[i];
        }
    }
    return 0;
}
