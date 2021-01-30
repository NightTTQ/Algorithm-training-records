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
    int n, s, d;
    cin >> n >> s >> d;
    int x, y;
    bool flag = false;
    for (int i = 0; i < n; i++)
    {
        cin >> x >> y;
        if (x < s && y > d)
            flag = true;
    }
    if (flag)
        cout << "Yes\n";
    else
        cout << "No\n";

    return 0;
}