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
#include <queue>
#include <sstream>
#define fast_io()                \
    ios::sync_with_stdio(false); \
    std::cin.tie(0);
typedef long long ll;
typedef long double ld;
ll mod = 10e9 + 7;
using namespace std;

int main()
{
    fast_io();
    string s,ss;
    
    while (getline(cin,s))
    {
        set<string> se;
        if(s=="#")
            break;
        istringstream stream(s);
        while(stream >>ss)
            se.insert(ss);
        cout << se.size()<< '\n';
        
    }
    
    return 0;
}