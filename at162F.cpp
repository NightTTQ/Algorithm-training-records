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
int cmp(int a,int b)
{
    return a > b;
}
int main()
{
    fast_io();
    int n;
    cin >> n;
    vector<int> a(n);
    ll ans = 0;
    for(int i= 0; i < n;i++)
        cin>>a[i];
    sort(a.begin(), a.end() ,cmp);
    bool flag = 0;
    ll sum = 0;
    for(auto i:a)
    {
        if(sum>=n/2)
            break;
        if (flag)
        {
            flag=false;
            continue;
        }
        else
        {
            flag=true;
            ans += i;
            sum++;
        }
    }
    cout << ans;
    return 0;
}