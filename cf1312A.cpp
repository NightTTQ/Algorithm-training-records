//#include <bits/stdc++.h>
#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <cmath>
#include <vector>
#define fast_io()                \
    ios::sync_with_stdio(false); \
    std::cin.tie(0);
typedef long long ll;
typedef long double ld;
using namespace std;
int main()
{
    fast_io();
    int T;
    cin >> T;
    
    while (T--)
    {
        int n, m;
        cin >> n >> m;
            if(n%m==0)
                cout << "YES"
                     << "\n";
            else
                cout << "NO"
                     << "\n";
    }
    
    return 0;
}