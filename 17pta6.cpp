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
    int x,wei=0;
    string ans;
    cin >> x;
    ll num=0;
    while(++wei)
    {
        num = num * 10 + 1;
        if(num/x||ans.length())
        {
            ans = ans + to_string(num / x);
            
        }
        if(num%x==0)
        {
            cout << ans << " " << wei;
            break;
        }
        num %= x;
    }
    return 0;
}