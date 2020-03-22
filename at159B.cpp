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
#include <set>
#define fast_io()                \
    ios::sync_with_stdio(false); \
    std::cin.tie(0);
#define mod 998244353
typedef long long ll;
typedef long double ld;
using namespace std;
bool is(string s,int a,int b)
{
    for (int i = a-1; i < (b-a)/2-1; i++)
        if(s[i]!=s[b-i-1])
            return false;
    return true;
}
int main()
{
    fast_io();
    string s;
    cin >> s;
    bool flag = true;
    for(int i = 0,j=s.length()-1; i < j;i++,j--)
        if(s[i]!=s[j])
        {
            flag = false;
            break;
        }
    for(int i = 0,j=(s.length()-1)/2-1; i < j;i++,j--)
        if(s[i]!=s[j])
        {
            flag = false;
            break;
        }
    for(int i = (s.length()+3)/2-1,j=s.length()-1; i < j;i++,j--)
        if(s[i]!=s[j])
        {
            flag = false;
            break;
        }
    if(flag)
        cout << "Yes";
    else
        cout << "No";
            return 0;
}