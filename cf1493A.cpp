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
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> all;
        for (int i = 1; i <= n; i++)
            all.push_back(i);
        for (int i = 0; i<n; i++)
        {
            if (k-all[i]-1>=0&&k - all[i] <= n&&k-all[i] !=all[i]&&all[k-all[i]-1]!=0)
            {
                //all[k-all[i]-1] =0;
                all[i] = 0;
            }
            if (all[i] == k)
                all[i] = 0;
        }
        int cnt=0;
        for (int i = 0; i < n; i++)
            if (all[i])
                cnt++;
        cout << cnt << "\n";
        for (int i = 0; i < n; i++)
            if (all[i])
                cout << all[i] << " ";
        if (cnt)
            cout<<"\n";
    }
    return 0;
}