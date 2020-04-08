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
    int t;
    cin>> t;
    while (t--)
    {
        int n;
        bool flag =true;
        bool f1 = false, f2 = false, f0 = false;
        cin >> n;
        vector<int>a(n);
        vector<int>b(n);
        int aa[n][3];
        for(int i = 0; i < n;i++)
            cin>>a[i];
        for(int i=n-1; i>=0;i--)
        {
            if(a[i]==1)
                f1 = true;//f1=1 f2=-1 f0=0
            if(a[i]==0)
                f0 = true;
            if(a[i]==-1)
                f2 = true;
            if(f1)
                aa[i][1] = 1;
            if(f2)
                aa[i][2] = 1;
            if(f0)
                aa[i][0] = 1;
        }
        for(int i=0; i<n;i++)
            cin>>b[i];
        if(a[0]!=b[0])
        {
            cout <<"NO\n";
            continue;
        }
        for (int i = 1; i < n; i++)
        {
            if(b[i]>0&&!f1)
            {
                cout<<"NO\n";
                flag=false;
                break;
            }
            if(b[i]<0&&!f2)
            {
                cout<<"NO\n";
                flag=false;
                break;
            }
        }
        if(flag)
            cout << "YES\n";
    }

    return 0;
}