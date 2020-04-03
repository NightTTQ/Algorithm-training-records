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
bool isinit(int x,int y,int x1,int y1,int x2,int y2)
{
    if(x>=x1)
    {
        if(y>=y1)
            if(x<=x2&&y<=y2)
                return true;
            else
                return false;
        else
            if(x<=x2&&y>=y2)
                return true;
            else
                return false;
    }
    else//x<x1
    {
        if(y>=y1)
            if(x>=x2&&y<=y2)
                return true;
            else
                return false;
        else
            if(x>=x2&&y>=y2)
                return true;
            else
                return false;
    }
}

int main()
{
    fast_io();
    int T;
    cin >> T;
    while(T--)
    {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        int x, y, x1, y1, x2, y2;
        cin >> x >> y >> x1 >> y1 >> x2 >> y2;
        if((x2-x1<1&&(a!=0||b!=0))||(y2-y1<1&&(c!=0||d!=0)))
        {
            cout << "No\n";
            continue;
        }
        if(a-b>x-x1||b-a>x2-x||c-d>y-y1||d-c>y2-y)
        {
            cout << "No\n";
            continue;
        }
        cout << "Yes\n";
    }
    return 0;
}