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
#define mod 1000000007
typedef long long ll;
typedef long double ld;
using namespace std;

vector<int> a, b;
int n;

bool check()
{
    ll A = 0, B = 0;
    int cnt = n - n / 4;
    sort(a.rbegin(), a.rend());
    sort(b.rbegin(), b.rend());
    for (int i = 0; i < cnt; i++)
    {
        A += a[i];
        B += b[i];
    }
    if (A >= B)
        return true;
    else
        return false;
}

int main()
{
    fast_io();
    int T;
    cin >> T;
    while (T--)
    {
        a.clear();
        b.clear();
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            int t;
            cin >> t;
            a.push_back(t);
        }
        for (int i = 0; i < n; i++)
        {
            int t;
            cin >> t;
            b.push_back(t);
        }
        int ans = 0;
        ll A = 0, B = 0;
        int cnt = n - n / 4;
        sort(a.rbegin(), a.rend());
        sort(b.rbegin(), b.rend());
        for (int i = 0; i < cnt; i++)
        {
            A += a[i];
            B += b[i];
        }
        ll diff = B - A;
        if (diff <= 0)
        {
            cout << "0\n";
            continue;
        }
        if (diff <= 100 * (4 - n % 4))
            ans = ceil(diff / 100.0);
        else
        {
        }
        cout << ans << "\n";
    }
    return 0;
}