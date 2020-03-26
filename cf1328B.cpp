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
        int n, k;
        cin >> n >> k;
        ll num = 1, f = 0, s = 0;
        while(num<=k)
        {
            f++;
            num += f;
        }
        num -= f;
        f--;
        s = k - num;
        for (int i = 0; i < n-(f+2);i++)
            cout << 'a';
        cout << 'b';
        for (int i = 0; i < f - s; i++)
            cout << 'a';
        cout << 'b';
        for (int i = 0; i < s; i++)
            cout << 'a';
        cout << "\n";
    }
    return 0;
}