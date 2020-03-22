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
    int ra, ca, rb, cb;
    ll a[202][202], b[202][202];
    ll c[202][202];
    cin >> ra >> ca;
    for (int i = 0;i<ra;i++)
        for (int j = 0;j<ca;j++)
            cin >> a[i][j];
    cin >> rb >> cb;
    for (int i = 0;i<rb;i++)
        for (int j = 0;j<cb;j++)
            cin >> b[i][j];
    if(ca!=rb)
        cout << "Error: " << ca << " != " << rb;
    else
    {
        for(int i=0;i<ra;i++)
            for(int j=0;j<rb;j++)
                for(int k=0;k<cb;k++)
                    c[i][k]+=a[i][j]*b[j][k];
        cout << ra << " " << cb << "\n";
        for(int i=0;i<ra;i++)
        {
            for(int j=0;j<cb;j++)
            {
                if(j!=cb-1)
                    cout << c[i][j] << " ";
                else
                    cout << c[i][j] << "\n";
            }
        }
    }
    return 0;
}