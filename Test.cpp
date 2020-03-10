//#include <bits/stdc++.h>
#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <cmath>
#include <iomanip>
#include <vector>
#define fast_io()                \
    ios::sync_with_stdio(false); \
    std::cin.tie(0);
typedef long long ll;
typedef long double ld;
using namespace std;
int a;
ll qpow(ll a,ll b)
{
    ll ans=1;
    ll base = a;
    while(b>0)
    {
        if(b&1)
            ans = (ans * base);
        base = (base * base);
        b >>= 1;
    }
    return ans;
}
int main()
{
    
    fast_io();
    vector<int> a;
    int n;
    cin >> n;
    int t;
    for (int i = 0; i < n;i++)
    {
        cin >> t;
        a.push_back(t);
    }
    int b;
    cin >> b;
    a.erase(a.begin() + b + 1);
    for (int i = 0; i < a.size();i++)
        cout << a[i] << " ";

    return 0;
}