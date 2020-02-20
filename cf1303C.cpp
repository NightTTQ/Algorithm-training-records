//#include <bits/stdc++.h>
#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <cmath>
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
    while(T--)
    {
        bool isused[27];
        string s;
        char key[60];
        memset(key, '0', sizeof(key));
        memset(isused, false, sizeof(isused));
        cin >> s;
        int now = 30;
        key[now] = s[0], key[++now] = s[1];
        for (int i = 2; i < s.length();i++)
        {
            
        }
    }
    system("pause");
    return 0;
}