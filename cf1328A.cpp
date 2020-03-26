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
        int a, b;
        cin >> a >> b;
        if(a%b)
            cout<<b-(a%b)<<"\n";
        else
            cout << "0\n";
    }
    return 0;
}