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
    int k;
    cin >> k;
    ll ans = 0;
    for (int i = 1; i <= k; i++)
    {
        ans++;
        for (int j = 1; j < k / i; j++)
            ans+=k/(i*j);
        
    }
        
    //numdiv(i)*floor((double)k/i)
    cout<<ans;
    return 0;
}