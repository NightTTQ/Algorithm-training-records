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
#include <map>
#include <queue>
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
    string s;
    cin >> s;
    int g = 0, p = 0, l = 0, t = 0;
    for(auto i:s)
    {
        if(i=='g'||i=='G')
            g++;
        if(i=='p'||i=='P')
            p++;
        if(i=='l'||i=='L')
            l++;
        if(i=='t'||i=='T')
            t++;
    }
    while(g>0||p>0||l>0||t>0)
    {
        if(g>0)
        {
            cout << 'G';
            g--;
        }
        if(p>0)
        {
            cout << 'P';
            p--;
        }
        if(l>0)
        {
            cout << 'L';
            l--;
        }
        if(t>0)
        {
            cout << 'T';
            t--;
        }
    }
    return 0;
}