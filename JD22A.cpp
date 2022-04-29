//#include <bits/stdc++.h>
#include <algorithm>
#include <cctype>
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
    int n;
    cin >> n;
    vector<ll> a(n);
    for (auto &i : a)
        cin >> i;
    ll num = 0;
    sort(a.begin(), a.end());
    for (int i = 0; i < n - 1; i++)
    {
        num = (a[i] + a[a.size() - i - 1]) / 2;
        for (int i = 0; i < a.size(); i++)
            if (a[i] >= num)
            {
                a.insert(a.begin() + i, num);
                break;
            }
    }
    cout << a[a.size() / 2];
}