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
int a;
bool work(string s)
{
    int len=s.size(),i=0,t=0;
    for(t=1;t<=len/2;++t)
    {
        if (len%t) continue;
        for (i=t;i<len&&s[i%t]==s[i];++i);
        if (i==len) 
        {
            a = t;
            return true;
        }
    }
    return false;
}
int main()
{
    string s;
    fast_io();
    cin >> s;
    if(work(s))
    {
        cout << s.substr(0, a);
    }
    else
        cout << "-1";
    return 0;
}