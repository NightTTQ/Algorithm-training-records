//#include <bits/stdc++.h>
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <vector>
#define fast_io()                \
    ios::sync_with_stdio(false); \
    std::cin.tie(0);
typedef long long ll;
typedef long double ld;
using namespace std;

int main()
{
    fast_io();
    int T;
    cin >> T;
    while (T--)
    {
        int n;
        int a[100001];
        cin >> n;
        for(int i=0;i<n;i++)
            cin >> a[i];
        sort(a, a + n);
        ll ans = 1;
        for(int i=1;i<n;i++)
        {
            if(a[i]!=a[i-1])
                ans++;
        }
        cout << ans<<"\n";

    }

    return 0;
}