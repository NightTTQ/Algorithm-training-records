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
#define N 1000007
typedef long long ll;
typedef long double ld;
using namespace std;

struct point
{
    int x,y,z;
}points[8];

bool check()
{
    double dis[36];
    for(int i=0;i<8;i++)
    {
        int cnt=1;
        for(int j=0;j<8;j++)
        {
            if(i==j)
                continue;
            dis[cnt]=0;
            dis[cnt]+=(points[i].x-points[j].x)*(points[i].x-points[j].x);
            dis[cnt]+=(points[i].y-points[j].y)*(points[i].y-points[j].y);
            dis[cnt]+=(points[i].z-points[j].z)*(points[i].z-points[j].z);
            cnt++;
        }
        sort(dis,dis+cnt);
        if(dis[1]==0)
            return false;
        if(dis[1]!=dis[2]||dis[1]!=dis[3]||dis[2]!=dis[3])
            return false;
        if(dis[4]!=dis[5]||dis[4]!=dis[6]||dis[5]!=dis[6])
            return false;
        if(dis[1]*2!=dis[4]||dis[1]*3!=dis[7])
            return false;
    }
    return true;
}

int main()
{
    fast_io();
    int T;
    cin>>T;
    while(T--)
    {
        for(int i=0;i<8;i++)
            cin>>points[i].x>>points[i].y>>points[i].z;
        if(check())
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}