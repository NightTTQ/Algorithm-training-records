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

int cmp(int a, int b)
{
    return a > b;
}

int main()
{
    fast_io();
    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        int a[n], l[n];
        vector<int> unlock;
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n; i++)
        {
            cin >> l[i];
            if (!l[i])
                unlock.push_back(a[i]);
        }
        sort(unlock.begin(), unlock.end(), cmp);
        ll now = 0;
        for (int i = 0; i < n; i++)
        {
            if (l[i])
                cout << a[i] << " ";
            else
                cout << unlock[now++] << " ";
        }
        cout << "\n";
    }
    return 0;
}
