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

int main()
{
    fast_io();
    int n,T,temp;
    cin >> T;
    while(T--)
    {
        int n;
        string s;
        cin >> n >> s;
        string a(n, '0'), b(n, '0');
        a[0] = '1';
        b[0] = '1';
        bool flag = false;
        for(int i = 1; i < n;i++)
        {
            if(s[i] == '2')
                if(flag)
                {
                    a[i] = '0';
                    b[i] = '2';
                    continue;
                }
                else
                {
                    a[i] = '1';
                    b[i] = '1';
                    //flag=true;
                    continue;
                }
            if(s[i] == '1')
                if(flag)
                {
                    a[i] = '0';
                    b[i] = '1';
                    continue;
                }
                else
                {
                    a[i] = '1';
                    b[i] = '0';
                    flag=true;
                    continue;
                }
            
        }
        cout<<a<<'\n'<<b<<'\n';
    }
    return 0;
}