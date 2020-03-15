//#include <bits/stdc++.h>
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <string>
#include <iomanip>
#include <iostream>
#include <vector>

#define fast_io()                \
    ios::sync_with_stdio(false); \
    std::cin.tie(0);
typedef long long ll;
typedef long double ld;
using namespace std;
int main()
{
    fast_io();
    int x, y;
    cin >>x >> y;
    cout << (100 * 100 / 2) - (100 - x) * y - x *y/2 -(100-y)  * (100 - x)/2;
    return 0;
}