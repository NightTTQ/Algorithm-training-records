//#include <bits/stdc++.h>
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <string>
#include <iomanip>
#include <iostream>
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
    int n;
    cin >> n;
    cin.ignore();
    while(n--)
    {
        string s;
        getline(cin,s);
        int dou = s.find(',');
        int ju = s.find('.');
        if(dou<3||(s.substr(dou-3,3)!="ong")||(s.substr(ju-3,3)!="ong"))
        {
            cout << "Skipped\n";
            continue;
        }
        else
        {
            int cnt = 0, k = 0;
            for (int i = s.length() - 1; cnt != 3;i--)
            {
                if(s[i]==' ')
                    cnt++;
                k = i;
            }
            s.replace(k + 1, s.length() - k, "qiao ben zhong.");
        }
        cout << s << "\n";
    }
    return 0;
}