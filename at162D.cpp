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
    ll n;
    string s;
    vector<int> r;
    vector<int> g;
    vector<int> b;
    cin >> n >> s;
    ll num = 0;
    for (ll i = 0; i < n;i++)
    {
        if(s[i]=='R')
            r.push_back(i+1);
        if(s[i]=='G')
            g.push_back(i+1);
        if(s[i]=='B')
            b.push_back(i+1);
    }
    for(auto i:r)
        for(auto j:g)
            for(auto k:b)
            {
                if(2*j==i+k)
                    continue;
                if(2*k==i+j)
                    continue;
                if(2*i==j+k)
                    continue;
                num++;
            }
    cout << num;
    return 0;
}