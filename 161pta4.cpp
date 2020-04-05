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
#define mod 998244353
typedef long long ll;
typedef long double ld;
using namespace std;

int main()
{
    fast_io();
    int T;
    cin >> T;
    map<string, int> pyq;
    while (T--)
    {
        int n;
        cin >> n;
        string x;
        if(n>1)
            for(int i=0; i<n;i++)
            {
                cin >> x;
                pyq[x]++;
            }
        else
            cin >> x;
    }
    int n;
    string x;
    cin >> n;
    bool flag=false;
    while (n--)
    {
        cin >> x;
        if(pyq[x]==0)
        {
            if(!flag)
            {
                cout << x;
                flag=true;
            }
                
            else
                cout << " " << x;
            pyq[x]++;
        }

    }
    if(!flag)
        cout << "No one is handsome";

    return 0;
}