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
        int g, b;
        double l;
        cin >> l >> g >> b;
        double must;
        must = ceil(l / 2.0);//must为必须修的好路的最小值
        if(g>=must||b==0)
        {
            cout << l << endl;
            continue;
        }
        double good;
        good = ceil(must / g);//达到一半以上好路所需的好天气循环次数
        ll ans = 0;
        double bad;
        bad = good * b;//每天都修路情况下坏路的数量
        if(good*)


        if(good*g>must)
        {
            ans = good * (g + b) - b - (good * g - must);

            ans += (l - ans);
        }
        else 
        {
            ans = good * (g + b) - b;
            ans += (l - ans);
        }

        cout << ans << endl;
    }
    system("pause");
    return 0;
}