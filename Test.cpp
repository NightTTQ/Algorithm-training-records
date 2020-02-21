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
    double a, b;
    cin >> a >> b;
    double ans;
    ans = a / (b * b);
    cout <<fixed<<setprecision(1)<< ans << endl;
    if(ans>25)
        cout << "PANG";
    else
        cout << "Hai Xing";
    system("pause");
    return 0;
}