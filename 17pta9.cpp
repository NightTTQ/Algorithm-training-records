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
struct ren
{
    string name;
    double tag;
    double num=0;
}peo[101];
int cmp(ren f,ren a)
{
    if(f.tag!=a.tag)
        return f.tag > a.tag;
    else
        return f.num < a.num;
}
int main()
{
    //fast_io();
    int n,t,temp;
    cin >> n;
    for(int i = 0; i < n;i++)
    {
        set<int> s;
        cin >> peo[i].name>>t;
        for (int j = 0;j<t;j++)
        {
            cin >> temp;
            s.insert(temp);
        }
        peo[i].tag = s.size();
        peo[i].num = t;
    }
    sort(peo, peo + n, cmp);
    for (int i = 0; i < 2; i++)
    if(peo[i].name!="")
        cout << peo[i].name << " ";
    else
        cout << "- ";
    if(peo[2].name!="")
        cout << peo[2].name;
    else
        cout << "-";
    return 0;
}