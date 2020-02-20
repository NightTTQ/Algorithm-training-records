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
    int T;
    cin >> T;
    while(T--)
    {
        string a, b, c;
        cin >> a >> b >> c;
        int flag = 0;
        for (int i = 0; i < a.length();i++)
        {
            if(c[i]!=a[i]&&c[i]!=b[i])
            {
                flag = 1;
                break;
            }
                
        }
        if(flag==0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    system("pause");
    return 0;
}