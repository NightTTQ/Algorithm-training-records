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
#include <map>
#define fast_io()                \
    ios::sync_with_stdio(false); \
    std::cin.tie(0);
#define mod 998244353
typedef long long ll;
typedef long double ld;
using namespace std;
int main()
{
    //fast_io();
    ll n;
    cin >> n;
    ll a[n];
    map<ll, ll> num;
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        num[a[i]]++;
    }
    ll sum = 0;
    for(auto i:num)
        sum += i.second * (i.second - 1) / 2;
    for(ll i = 0; i < n; i++)
        cout << sum - (num[a[i]] * (num[a[i]] - 1) / 2) + ((num[a[i]] - 1) * (num[a[i]] - 2) / 2) << '\n';
    return 0;
}