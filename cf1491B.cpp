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
        int n, u, v;
        cin >> n >> u >> v;
        vector<int> a(n);
        vector<int> same,diff;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (i)
            {
                if (a[i] != a[i - 1])
                    diff.push_back(i);
                else
                    same.push_back(i);
            }
        }
        ll ans = 0;
        if (u > v)//优先左右移动
        {
            for (auto i : diff)
            {
                if (a[i - 1] < a[i])  //向右移动
                {
                }
                else  //向左移动
                {
                    
                }
            }
            for (int i = 0; i < n-1; i++)
            {
                if (a[i] <= a[i + 1] + 1 && a[i] >= a[i + 1] - 1)
                {
                }
                else
                    break;
            
            }
        }
        else//优先上下移动
        {
            
            }
        
        
    }
    return 0;
}