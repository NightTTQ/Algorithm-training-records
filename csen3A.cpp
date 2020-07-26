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
    int n, l, a, b;
    cin >> n >> l >> a >> b;
    int temp = 0, vol = 0;
    int opt, x;
    for (int i = 0; i < n; i++)
    {
        cin >> opt;
        if (opt != 3)
            cin >> x;
        if (opt == 1)
        {
            temp = x;
            continue;
        }
        if (opt == 2)
        {
            vol = x;
            continue;
        }
        if (opt == 3)
        {
            if (temp >= a && temp <= b && vol >= l)
                cout << temp << "\n";
            else
                cout << "GG\n";
            continue;
        }
    }
    return 0;
}