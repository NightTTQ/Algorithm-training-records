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

template<typename _EuclideanRingElement>
    _EuclideanRingElement
    _gcd(_EuclideanRingElement __m, _EuclideanRingElement __n)
    {
      while (__n != 0)
	{
	  _EuclideanRingElement __t = __m % __n;
	  __m = __n;
	  __n = __t;
	}
      return __m;
    }

int main()
{
    fast_io();
    int k;
    int t;
    ll ans = 0;
    cin >> k;
    for (int i = 1; i <= k;i++)
        for (int j = 1;j <= k;j++)
            for(int  l= 1;l <= k;l++)
            {
                t = _gcd(i, j);
                ans += _gcd(t, l);
            }
    cout << ans;

    return 0;
}