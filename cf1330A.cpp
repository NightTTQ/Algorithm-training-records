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
    while(T--)
    {
        int n,x;
        int a[101];
        bool b[303];
        memset(b, 0, sizeof(b));
        cin >> n >> x;
        
        for (int i = 0; i < n;i++)
        {
            cin>>a[i];
            b[a[i]] = true;
        }
        int m = 0;
        int j = 1;
        for (int i = 0;; j++)
        {
            if(b[j])
                continue;
            b[j]=true;
            i++;
            if(i>x)
            {
                m = j - 1;
                break;
            }
            
        }
        cout << m << "\n";
    }
    return 0;
}