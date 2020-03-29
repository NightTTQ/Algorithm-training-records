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
    int n;
    int k, f[11],m=0,key=0;
    map<int, int> zan;
    cin >> n;
    for (int i = 0; i < n;i++)
    {
        cin >> k;
        for (int j = 0; j < k;j++)
        {
            cin >> f[j];
            zan[f[j]]++;
            if(zan[f[j]]>m)
            {
                m=zan[f[j]];
                key=f[j];
            }
            else if(zan[f[j]]==m)
            {
                key=max(key,f[j]);
            }
        }
        
    }
    cout << key << " " << zan[key];
        return 0;
}