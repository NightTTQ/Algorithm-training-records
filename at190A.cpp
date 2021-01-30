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
    int a, b, c;
    cin >> a >> b >> c;
    if (c)
    {
        while (1)
        {
            b--;
            if (b < 0)
            {
                cout << "Takahashi\n";
                break;
            }
            a--;
            if (a < 0)
            {
                cout << "Aoki\n";
                break;
            }
        }
    }
    else
    {
        while (1)
        {
            a--;
            if (a < 0)
            {
                cout << "Aoki\n";
                break;
            }
            b--;
            if (b < 0)
            {
                cout << "Takahashi\n";
                break;
            }
        }
    }

    return 0;
}