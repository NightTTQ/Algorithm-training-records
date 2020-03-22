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
    int n,flag=0;
    int i = 1;
    while (cin>>n)
    {
        if(n==250&&flag==0)
            flag = i;
        i++;
        if(flag)
            break;
    }
    cout << flag;

    return 0;
}