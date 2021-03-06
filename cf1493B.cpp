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

bool check(int h, int m,int hh,int mm)
{
    if(h==0&&m==0) return true;
    bool flag =true;
    //m->H
    int m1 = m / 10;
    int m2 = m % 10;
    if (m1 == 3 || m1 == 4 || m1 == 6 || m1 == 7 || m1 == 9)
        flag = false;
    if (m2 == 3 || m2 == 4 || m2 == 6 || m2 == 7 || m2 == 9)
        flag = false;
      
    int H = 0;
    if (m2 == 0)
        H = 0;
    else if (m2 == 1)
        H = 1;
    else if (m2 == 2)
    
        H = 5;
    else if (m2 == 5)
        H = 2;
    else if (m2 == 8)
        H = 8;
        
    if (m1 == 0)
        H = H*10+0;
    else if (m1 == 1)
        H = H*10+1;
    else if (m1 == 2)
        H = H*10+5;
    else if (m1 == 5)
        H = H*10+2;
    else if (m1 == 8)
        H = H * 10 + 8;

    if (H >= hh)
        flag = false;

    // hh->M
    int h1 = h / 10;
    int h2 = h % 10;
    if (h1 == 3 || h1 == 4 || h1 == 6 || h1 == 7 || h1 == 9)
        flag = false;
    if (h2 == 3 || h2 == 4 || h2 == 6 || h2 == 7 || h2 == 9)
        flag = false;
   
    int M = 0;
    if (h2 == 0)
        M = 0;
    else if (h2 == 1)
        M = 1;
    else if (h2 == 2)
        M = 5;
    else if (h2 == 5)
        M = 2;
    else if (h2 == 8)
        M = 8;
        
    if (h1 == 0)
        M = M*10+0;
    else if (h1 == 1)
        M = M*10+1;
    else if (h1 == 2)
        M = M*10+5;
    else if (h1 == 5)
        M = M*10+2;
    else if (h1 == 8)
        M = M * 10 + 8;

    if (M >= mm)
        flag = false;
    return flag;
}

int main()
{
    fast_io();
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int hh, mm;
        scanf("%d %d", &hh, &mm);
        int h, m;
        scanf("%d:%d", &h, &m);

        while (!check(h, m,hh,mm))
        {
            m++;
            if (m == mm)
                h++, m = 0;
            if (h == hh)
                h=0;
        }
        if (h >= 10)
            printf("%d:", h);
        else
            printf("0%d:", h);
        if (m >= 10)
            printf("%d\n", m);
        else
            printf("0%d\n", m);
    }
    return 0;
}