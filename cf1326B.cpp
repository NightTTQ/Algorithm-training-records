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
typedef long long ll;
typedef long double ld;
using namespace std;
int main()
{
    fast_io();
    int n,a[2000001],b[2000001];
    int nmax;
    cin >> n;
    for (int i = 0; i < n;i++)
    {
        cin >>b[i];
        if(i==0)
        {
            a[0] = b[0];
            nmax = a[0];
        }
        else
        {
            if(a[i-1]>nmax)
                nmax = a[i - 1];
            a[i] = b[i] + nmax;
        }
    }
    for (int i = 0; i < n;i++)
        cout<< a[i] << " ";  

        

    return 0;
}