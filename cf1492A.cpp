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
    int T;
    cin >> T;
    while (T--)
    {
        ll p, a, b, c;
        cin >> p >> a >> b >> c;
        if (a >= p)
        {
            //a = (p / a + 1) * a;
            a=a-p;
        }
        else
        {
            a = (p / a + 1) * a;
            a = a-p;
        }
            
        if (b >= p)
        {
            //b = (p / b + 1) * b;
            b=b-p;
        }
        else
        {
            b = (p / b + 1) * b;
            b = b-p;
        }
         
        if (c >= p)
        {
            //c = (p / c + 1) * c;
            c=c-p;
        }
        else
        {
            c = (p / c + 1) * c;
            c= c-p;
        }
            
        cout<<min({a,b,c})<<"\n";
    }
    return 0;
}