//#include <bits/stdc++.h>
#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <cmath>
#define fast_io()                \
    ios::sync_with_stdio(false); \
    std::cin.tie(0);
typedef long long ll;
typedef long double ld;
using namespace std;

int main()
{
    fast_io();
    int T;
    cin >> T;
    while(T--)
    {
        ll g, b;
        ll l;
        cin >> l >> g >> b;
        ll must;
        must = ceil(l / 2.0);//must为必须修的好路的最小值
        ll ans = 0;
        if(must%g!=0)
            ans = must + (must / g - 1) * b + b;
        else
            ans = must + (must / g - 1) * b ;
        if(ans<l)
            ans = l;
        cout << ans << endl;
    }
    system("pause");
    return 0;
}