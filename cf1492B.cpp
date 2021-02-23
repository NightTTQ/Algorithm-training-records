//#include <bits/stdc++.h>
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <functional>
#include <iomanip>
#include <iostream>
#include <map>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <vector>
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
    while (T--)
    {
        int n;
        cin >> n;
        vector<int> p;
        vector<int> mp(n);
        int mv=0,t;
        for (int i=0;i<n;i++)
        {
            cin >> t;
            p.push_back(t);
            if(i)
                mp[i] = mp[i-1];
            if (t > mv)
            {
                mv = t;
                mp[i] = i;
            }
        }
        do
        {
            for (int i = mp[mp.size()-1]; i < p.size(); i++)
                cout << p[i] << " ";
            p.erase(p.begin() +mp[mp.size() - 1],p.end());
            mp.erase(mp.begin() + mp[mp.size() - 1], mp.end());
        }while (mp.size());
        
        cout<<"\n";

    }
    return 0;
}