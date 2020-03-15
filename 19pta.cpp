//#include <bits/stdc++.h>
#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <cmath>
#include <iomanip>
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
 
    double m,k;
    cin >> k >> m;
    double ans = 0.0;
    ans = k / (m * m);
    cout <<fixed << setprecision(1)<< ans << "\n";
    if(ans>25)
        cout << "PANG";
    else
    {
        cout << "Hai Xing";
    }
    
    return 0;
}