//#include <bits/stdc++.h>
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <string>
#include <iomanip>
#include <iostream>
#include <vector>    
#include <cstdlib>
#include <set>
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
    double l;
    cin >> l;
    double t;
    t = l / 3.0;
    cout <<fixed<<setprecision(12)<< t * t * t;
    return 0;
}