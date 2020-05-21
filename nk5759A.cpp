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
    vector<int> a(n);

    bool flag = true;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n - 1; i++)
    {
        map<int, int> vir;
        map<int, int> one;
        for (int j = i; j < n; j++)
        {
            vir[a[j]]++;
            if (vir[a[j]] == 1)
                one[]
        }
    }

    if (flag)
        cout << "chong";
    else
        cout << "fuchong";

    return 0;
}