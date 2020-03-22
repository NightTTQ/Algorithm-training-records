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
#define mod 998244353
typedef long long ll;
typedef long double ld;
using namespace std;
struct da
{
    string name;
    int bre;
    int pump;
}peo[11];

int main()
{
    fast_io();
    int n;
    cin >> n;
    for (int i = 0;i < n;i++)
        cin >> peo[i].name >> peo[i].bre >> peo[i].pump;
    for (int i = 0;i < n;i++)
        if(peo[i].bre>20||peo[i].bre<15||peo[i].pump>70||peo[i].pump<50)
            cout << peo[i].name << "\n";
        return 0;
}