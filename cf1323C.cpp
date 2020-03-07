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
    int n;
    cin >> n;
    string s;
    cin >> s;
    int le = 0, ri = 0, wa[100001], fix[100001], wan = 0, fin = 0;
    bool flag = false;
    for (int i = 0; i < n;i++)
    {
        if(s[i]=='(')
        {
            le++;
            if(le==ri&&flag)
            {
                fix[fin++] = i;
                flag = false;
            }
        }
        else
        {
            ri++;
            if(ri>le&&!flag)
            {
                wa[wan++] = i;
                flag = true;
            }
               
        }
    }
    if (flag||ri!=le)
    {
        cout << "-1";
    }
    else
    {
        int ans = 0;
        for (int i = 0; i < fin;i++)
            ans += fix[i] - wa[i] + 1;
        cout << ans;
    }

    return 0;
}