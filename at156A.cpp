//#include <bits/stdc++.h>
#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <cmath>
#include <iomanip>
#define fast_io()                \
    ios::sync_with_stdio(false); \
    std::cin.tie(0);
typedef long long ll;
typedef long double ld;
using namespace std;

int main()
{
    fast_io();
    ll n, r;
    cin >> n >> r;
    if(n>=10)
        cout << r;
    else
        cout << r + 100 * (10 - n);


    system("pause");
    return 0;
}