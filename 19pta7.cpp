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
        int sex, cm, kg;
        cin>>sex >> cm >> kg;
        if(sex)
        {
            if(cm>130)
                cout << "ni li hai! ";
            else if(cm==130)
                cout << "wan mei! ";
            else
                cout << "duo chi yu! ";
            if(kg>27)
                cout << "shao chi rou!";
            else if(kg==27)
                cout << "wan mei!";
            else
                cout << "duo chi rou!";
            cout << "\n";
        }
        else
        {
            if(cm>129)
                cout << "ni li hai! ";
            else if(cm==129)
                cout << "wan mei! ";
            else
                cout << "duo chi yu! ";
            if(kg>25)
                cout << "shao chi rou!";
            else if(kg==25)
                cout << "wan mei!";
            else
                cout << "duo chi rou!";
            cout << "\n";
        }
        
    }
    return 0;
}