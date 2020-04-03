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
    int T;
    cin >> T;
    while(T--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        int ans = 0;
        bool lf=false,rf=false;
        for (int i = 0; i < n;i++)
            cin >> a[i];
        for(int i = 0; i < n;i++)
        {
            set<int> le;
            set<int> ri;
            for (int x = 0; x < i;x++)
            {
                le.insert(a[x]);
                if(le.size()==n)
                {
                    ans = i;
                    lf = true;
                    break;
                }
            }
            for (int x = i; x < n;i++)
            {
                ri.insert(a[x]);
                if(ri.size()==n)
                {
                    ans = i;
                    rf = true;
                    break;
                }
            }
            if(lf||rf)
            {
                break;
                ans = i;
            }
                
        }
        if(lf&&rf)
            cout << "2\n";
        else if(!lf&&!rf)
            cout << "0\n";
        else
            cout << "1\n";
        if(lf)
        {
            cout << "1 " << ans << "\n";
            //cout << "\n";
        }
        if(rf)
        {
            
            cout << "\n";
        }
        
    }
    return 0;
}