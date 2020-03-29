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
#include <map>
#define fast_io()                \
    ios::sync_with_stdio(false); \
    std::cin.tie(0);
#define mod 998244353
typedef long long ll;
typedef long double ld;
using namespace std;

int main()
{
    fast_io();
    int n;
    cin >> n;
    string s;
    getline(cin,s);
    getline(cin,s);
    int x;
    if(s.length()%n)
    {
        int t = n - s.length() % n;
        for(int i=0;i<t;i++)
            s += " "; 
    }   
    x = s.length() / n;
    string ans[n];
    for (int i = 0;i<s.length();i++)
    {
        int t = i % n;
        ans[t] = s[i] + ans[t];
    }
    for(auto i:ans)
        cout << i << "\n";
    return 0;
}