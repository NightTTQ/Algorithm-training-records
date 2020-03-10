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

    int n;
    ll ans = 0;
    vector<int> a;
    cin >> n;
    int t;
    for (int i = 0; i < n; i++)
    {
        cin >> t;
        a.push_back(t);
    }
    bool flag = true;
    while (flag)
    {
        flag = false;
        for (int i = 0; i < a.size() - 1; i++)
        {
            if (a[i] == a[i + 1])
            {
                a.erase(a.begin() + i);
                a[i]++;
                //ans++;
                flag = true;
                break;
            }
        }
    }
    cout << a.size();

    return 0;
}