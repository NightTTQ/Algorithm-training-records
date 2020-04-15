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
    int t;
    cin >> t;
    while (t--)
    {
        int x, n, m;
        cin>>x >> n >> m;
        while (x>=20)
        {
            if(n>0)
            {
                n--;
                x /= 2;
                x += 10;
            }
            else
            {
                m--;
                x -= 10;
            }
            if(n==0&&m==0)
                break;
        }
        while(m)
        {
            m--;
            x -= 10;
        }
        if(x<=0)
            cout << "YES\n";
        else
            cout << "NO\n";

    }

    return 0;
}