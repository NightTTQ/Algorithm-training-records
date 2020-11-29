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

enum num
{
    a,
    b,
    c = 5,
    d,
    e = 10
};

int main()
{
    fast_io();
    // num a4 = a1;
    // cout << a1 << " " << a2 << " " << a3 << "\n";
    // cout << a4;
    // {
    //     const static int sta = 111;
    //     cout << sta;
    // }
    // cout << a << " " << b << " " << c << " " << d << " " << e;
    int a[5] = {1, 3, 5, 7, 9}, *p = a;
    cout << *(p + 2);
    return 0;
}