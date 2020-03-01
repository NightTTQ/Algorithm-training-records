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
    fast_io();
    string s;
    int n,ans=0;
    bool flag = false;
    cin >> n >> s;
    do
    {
        flag = false;
        for (int i = 1; i < s.length() - 1; i++)
            if(abs(s[i-1]-s[i+1])==1)
            {
                s.erase(i - 1, 1);
                ans++;
                flag = true;
            }
    } while (flag);
    flag = false;
    do
    {
        flag = false;
        for (int i = 0; i < s.length() - 1; i++)
            if(abs(s[i]-s[i+1])==1)
            {
                s.erase(i, 1);
                ans++;
                flag = true;
            }

    } while (flag);

    cout << ans;
    system("pause");
    return 0;
}