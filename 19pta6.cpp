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
    int n;
    cin >> n;
    while(n--)
    {
        string s;
        cin >> s;
        int sum1 = 0, sum2 = 0;
        for (int i = 0; i < 6;i++)
            if(i<3)
                sum1 += s[i]-'0';
            else
                sum2 += s[i]-'0';
        if(sum1==sum2)
            cout << "You are lucky!\n";
        else
            cout << "Wish you good luck.\n";
    }
    return 0;
}