//#include <bits/stdc++.h>
#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <cmath>
#include <iomanip>
#define fast_io()                \
    ios::sync_with_stdio(false); \
    std::cin.tie(0);
typedef long long ll;
typedef long double ld;
using namespace std;

int main()
{
    string s;
    fast_io();
    
    while (cin >> s)
    {
        for (int k = 1; k <= s.length();k++)
            string tmp = s;
        for (int i = 0; i <= s.length()-k;i++)
            reverse(tmp.begin() + i, tmp.begin() + i + k);

        cout << tmp;
        
    }
    /*
    cin >> s;
    reverse(s.begin(), s.begin() + s.length());
    cout << s;
    */
    return 0;
}