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
    int x = 0, y = 0;
    for (auto i : s)
    {
        if (i == 'x')
            x++;
        if (i == 'y')
            y++;
    }
    cout << abs(x - y) / 2;
    return 0;
}