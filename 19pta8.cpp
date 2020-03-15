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
#include <sstream> 
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
    getchar();
    while(n--)
    {
        string s,str[1001];
        int cnt = 0;
        getline(cin,s);
        cout << s << "/nAI: ";
        for (int i = 0; i < s.length();i++)
        {
            if(isalnum(s[i]))
            {
                if(s[i]!='i')
                    s[i] -= 32;
            }  
            else
            {
                s.insert(i, " ");
                i++;
            }
            if(s[i]=='?')
                s[i] = '!';
        }
        string st;
        stringstream st(s);
        while(st>>s)
            str[cnt++] = s;
        if(!isalnum(str[0][0]))
            cout << " ";
        for(int i=1; i < cnt;i++)
        {
            if(!isalnum(str[i][0]))
                cout << str[i];
            else if((str[i]=="can" || str[i]=="could") && str[i+1]=="you")
            {
                cout << " I " << str[i];
				i++;
            }
            else if(str[i]=="I" || str[i]=="me"){
				cout << " you";
			}
			else
				cout << " " << str[i];
        }
        cout << "\n";
    }
    return 0;
}