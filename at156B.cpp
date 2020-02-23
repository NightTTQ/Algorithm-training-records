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
    ll n, k, num = 0;
    cin >> n >> k;
    while(n)
    {
        num++;
        n /= k;
    }
    cout << num;


    system("pause");
    return 0;
}