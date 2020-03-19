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
    int T;
    cin>> T;
    while(T--)
    {
        int n;
        cin >> n;
        string s;
        if(n<=1)
        {
            cout << "-1\n";
            continue;
        }
        else
            for (int i = 0; i < n-1; i++)
                cout << "3";
        cout << "4\n";
    }

    return 0;
}