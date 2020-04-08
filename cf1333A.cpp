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
        int n, m;
        cin>> n >> m;
        for (int i = 1; i <= n;i++)
        {
            for (int j = 1; j <= m;j++)
                if(i==1&&j==1)
                    cout << "W";
                else
                    cout << "B";
            cout << "\n";
        }
            
    }

    return 0;
}