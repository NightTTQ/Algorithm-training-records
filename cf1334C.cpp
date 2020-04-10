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
int cmp(double a, double b)
{
    return a > b;
}

struct monster
{
    int a;
    int b;
};

int main()
{
    fast_io();
    int t;
    cin>> t;
    while (t--)
    {
        int n;
        ll ans = 0;
        ll mi = 0;
        ll now = 0;
        cin >> n;
        monster mon[n];
        for(int i = 0; i < n;i++)
            cin >> mon[i].a >> mon[i].b;
        ans = mon[0].a;
        for(int i = 1; i < n;i++)
        {
            if(mon[i-1].b<mon[i].a)
                ans+=mon[i].a-mon[i-1].b;
        }
        mi = ans;
        now = ans;
        for (int i = 1; i < n;i++)
        {
            now += mon[i].a;
            now -= mon[i - 1].a;
            if(i>=2)
            {
                if(mon[i-1].a>mon[i-2].b)
                    now+=mon[i-1].a-mon[i-2].b;
            }
            else
                if(mon[0].a>mon[n-1].b)
                    now+=mon[0].a-mon[n-1].b;
            mi = min(mi, now);
        }
        cout << mi;
    }

    return 0;
}