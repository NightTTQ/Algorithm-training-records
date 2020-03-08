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
    int n;
    cin >> n;
    string s;
    cin >> s;
    int le = 0, ri = 0, wan = 0, fin = 0;
    vector<int> wa;
    vector<int> fix;
    bool flag = false;
    for (int i = 0; i < n;i++)
    {
        if(s[i]=='(')
        {
            le++;
            if(le==ri&&flag)
            {
                fix.push_back(i);
                fin++;
                flag = false;
            }
        }
        else
        {
            ri++;
            if(ri>le&&!flag)
            {
                wa.push_back(i);
                wan++;
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