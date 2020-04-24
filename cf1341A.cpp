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
    int T;
    cin >> T;
    while (T--)
    {
        int n, a, b, c, d;
        cin >> n >> a >> b >> c >> d;
        if (n * (a - b) > (c + d) || n * (a + b) < (c - d))
            cout << "No\n";
        else
            cout << "Yes\n";
    }
    return 0;
}