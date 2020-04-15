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
#define fast_io()                \
    ios::sync_with_stdio(false); \
    std::cin.tie(0);
typedef long long ll;
typedef long double ld;
ll mod = 10e9 + 7;
using namespace std;
struct ddd
{
    
    string local;
    string name;
    int level;
}in[500];
int cmp(ddd a,ddd b)
{
    if(a.local != b.local)
        return a.local < b.local;
    else if(a.level != b.level)
        return a.level > b.level;
    else
        return a.name < b.name;
}

int main()
{
    fast_io();
    int n,cas=0;
    while(cin>>n)
    {
        string s;
        for (int i = 0;i<n;i++)
        {
            cin >> in[i].name >> in[i].local >> s;
            if(s=="wonderful")
                in[i].level = 2;
            else if(s=="good")
                in[i].level = 1;
            else if(s=="so-so")
                in[i].level = 0;
        }
        sort(in, in + n, cmp);
        string t = "";
        cout << "Case " << ++cas << "\n";
        for(int i=0; i<n; i++)
        {
            if(t!=in[i].local)
            {
                cout << in[i].local << ":\n";
                t=in[i].local;
            }
            cout << "          " << in[i].name << " ";
            if(in[i].level==0)
                cout << "so-so\n";
            else if(in[i].level==1)
                cout << "good\n";
            else
                cout << "wonderful\n";
        }
    }
    return 0;
}