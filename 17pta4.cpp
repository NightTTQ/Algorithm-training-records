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
    int k;
    cin >> k;
    string s;
    int n = 0;
    while(cin>>s)
    {
        if(s=="End")
            break;
        if(n==k)
        {
            cout << s<< "\n";
            n = 0;
            continue;
        }
        else
            if(s=="ChuiZi")
                cout << "Bu\n";
            else if(s=="JianDao")
                cout << "ChuiZi\n";
            else if(s=="Bu")
                cout << "JianDao\n";
            n++;
    }
    return 0;
}