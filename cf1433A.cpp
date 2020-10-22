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
    int T;
    cin >> T;
    while (T--)
    {
        int x;
        cin >> x;
        int t = 0;
        t = ((x % 10) - 1) * 10;
        int tt = 0;
        while (x)
        {
            x /= 10;
            tt++;
        }
        for (int i = 1; i <= tt; i++)
            t += i;
        cout << t << "\n";
    }
    return 0;
}
