//#include <bits/stdc++.h>
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
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
    int k, a, b;
    cin >> k >> a >> b;
    int t = 0;
    bool flag = false;
    while (t <= b)
    {
        t += k;
        if (t >= a && t <= b)
        {
            flag = true;
            break;
        }
    }
    if (flag)
        cout << "OK\n";
    else
        cout << "NG\n";
    return 0;
}