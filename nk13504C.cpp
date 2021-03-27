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
        int n;
        cin >> n;
        if (n == 0 || n == 1 || n == 2 || n == 3 || n == 4 || n == 6 ||
            n == 7 || n == 9 || n == 10 || n == 12 || n == 15 || n == 18 ||
            n == 33)
            cout << "NO\n";
        else
            cout << "YES\n";
    }

    return 0;
}