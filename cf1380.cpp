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
    int T;
    cin >> T;
    while (T--)
    {
        int n;
        int i, j, k;
        cin >> n;
        int a[n];
        for (i = 0; i < n; i++)
            cin >> a[i];
        for (i = 0; i < n - 1; i++)
        {
            if (a[i] < a[i + 1])
                break;
        }
        for (k = n - 1; k >= 0; k--)
        {
            if (a[k] < a[k - 1])
                break;
        }
        if (a[i + 1] > a[k - 1])
            j = i + 1;
        else
            j = k - 1;
        if (i < j && j < k && a[i] < a[j] && a[j] > a[k])
        {
            cout << "YES\n" << i + 1 << " " << j + 1 << " " << k + 1 << "\n";
        }
        else
            cout << "NO\n";
    }
    return 0;
}