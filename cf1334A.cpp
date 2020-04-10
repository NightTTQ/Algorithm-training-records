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
struct game
{
    int p;
    int c;
};
int cmp(game a, game b)
{
    return a.p< b.p;
}

int main()
{
    fast_io();
    int t;
    cin>> t;
    while (t--)
    {
        int n;
        cin >> n;
        game d[n];
        int played = 0, cleared = 0;
        bool flag = true;
        for(int i=0; i<n;i++)
        {
            int play, clear;
            cin>>play>>clear;
            if(play<played||clear<cleared||play-played<clear-cleared)
                flag = false;
            played = play;
            cleared = clear;
        }
            
        
        
        if(flag)
            cout << "YES\n";
        else
            cout<<"NO\n";
    
    }

    return 0;
}