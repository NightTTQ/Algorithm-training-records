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
    int cnt = 0, m = 0;
    cin >> s;
    for (int i = 0; i < s.length(); i++)
        if (s[i] == 'R')
            cnt++;
        else
        {
            m = max(m, cnt);
            cnt = 0;
        }

    cout << max(m, cnt);
    return 0;
}
