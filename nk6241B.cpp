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
    int n, k;
    cin >> n >> k;
    int mx = 0, my = 0, bx = 0, by = 0;
    char c[n];
    for (int i = 0; i < n; i++)
        cin >> c[i];
    for (int i = 0; i < n; i++)
    {
        if (c[i] == 'U')
            my++;
        if (c[i] == 'D')
            my--;
        if (c[i] == 'L')
            mx--;
        if (c[i] == 'R')
            mx++;
        if (i >= k)
        {
            if (c[i - k] == 'U')
                by++;
            if (c[i - k] == 'D')
                by--;
            if (c[i - k] == 'L')
                bx--;
            if (c[i - k] == 'R')
                bx++;
        }

        if (mx == bx && my == by && i >= k - 1)
        {
            cout << "no\n";
            return 0;
        }
    }

    cout << "yes\n";
    return 0;
}