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
#define fast_io()                \
    ios::sync_with_stdio(false); \
    std::cin.tie(0);
#define mod 998244353
typedef long long ll;
typedef long double ld;
using namespace std;
int cmp(ll a, ll b)
{
    return a > b;
}
int main()
{
    fast_io();
    int n;
    cin >> n;
    ll p[100001];
    for(int i = 0; i < n;i++)
        cin >> p[i];
    sort(p, p + n,cmp);
    ll big = 0, small = 0;
    if(n%2)
    {
        cout << "Outgoing #: " << n / 2 + 1 << "\n";
        cout<<"Introverted #: "<<n/2<<"\n";
        for(int i=0;i<n/2+1;i++)
            big+=p[i];
        for (int i = n / 2 + 1; i < n;i++)
            small+=p[i];
        cout << "Diff = " << big - small << "\n";
    }
    else
    {
        cout << "Outgoing #: " << n / 2 << "\n";
        cout << "Introverted #: " << n / 2 << "\n";
        for (int i = 0; i < n / 2; i++)
            big += p[i];
        for (int i = n / 2; i < n; i++)
            small += p[i];
        cout << "Diff = " << big - small << "\n";
    }
    return 0;
}