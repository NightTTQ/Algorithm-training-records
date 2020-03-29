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
#define fast_io()                \
    ios::sync_with_stdio(false); \
    std::cin.tie(0);
#define mod 998244353
typedef long long ll;
typedef long double ld;
using namespace std;

struct apples
{
    int num;
    int kind;
}app[300003];

int cmp(apples f,apples a)
{
    return f.num > a.num;
}
int main()
{
    fast_io();
    int x, y, a, b, c;
    cin >> x >> y >> a >> b >> c;
    for (int i = 0; i < a; i++)
    {
        cin >> app[i].num;
        app[i].kind = 1;
    }
    for (int i = a; i < (a+b); i++)
    {
        cin >> app[i].num;
        app[i].kind = 2;
    }
    for (int i = (a+b); i < (a+b+c); i++)
    {
        cin >> app[i].num;
        app[i].kind = 3;
    }
    sort(app, app + (a + b + c), cmp);
    ll ans = 0, num = 0;
    int xx = 0, yy = 0;
    for (int i = 0;i<(a+b+c);i++)
    {
        if(app[i].kind==3)
        {
            if((xx+yy+num)>=(x+y))
                break;
            else
            {
                ans+=app[i].num;
                num++;
            }
        }
        else if(app[i].kind==1)
        {
            if(xx<x)
            {
                ans += app[i].num;
                xx++;
            }    
        }
        else if(app[i].kind==2)
        {
            if(yy<y)
            {
                ans+=app[i].num;
                yy++;
            }
        }
        if((xx+yy+num)>=(x+y))
            break;
    }
    cout << ans;
    return 0;
}