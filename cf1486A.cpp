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
        int n;
        cin>>n;
        vector<int>h(n);
        for(int i=0; i < n; i++)
            cin>>h[i];
        ll cur=0;
        bool flag =true;
        for(int i=0; i < n; i++)
        {
            
            if(h[i]+cur<i)
            {
                flag=false;
                break;
            }
            if(h[i]>i)
                cur+=h[i]-i;
            else
                cur-=i-h[i];
        }
        if(flag)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }

    return 0;
}