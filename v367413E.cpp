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

int main()
{
    fast_io();
    int n;
    string z = "   |----";
    cin >> n;
    while (n--)
    {
        int m;
        map<string, map<string, int>> all;
        all.clear();
        cin >> m;
        string s,ss;
        int num;
        for (int i = 0; i < m;i++)
        {
            cin >> s >> ss >> num;
            s = z + s;
            all[ss][s] += num;
        }
        bool ok = false;
        for(auto i:all)
        {
            if(!ok)
                ok=true;
            else
                cout<<"\n"<<"";
            map<string, int>::iterator it;
            cout << i.first << "\n";
            for(it=i.second.begin();it!=i.second.end();it++)
                if(it!=i.second.begin())
                    cout <<"\n"<< it->first << "(" << it->second << ")";
                else
                    cout << it->first << "(" << it->second << ")";
                    
                
                    
        }
        cout << "\n";
    }

    return 0;
}