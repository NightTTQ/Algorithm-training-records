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
    string s;
    getline(cin,s);
    int len = s.size();
    int num=0;
    for(int i = 0 ; i <= len ; i ++)
    {
 
        if(s[i]=='6')
            num++;
        else
        {
            
            if(num>9)
                printf("27");
            else if(num>3)
                printf("9");
            else 
                while(num--)
                    printf("6");
            if(i==len)
                break;
            num=0;
            printf("%c",s[i]);
        }
    }
    return 0;
}