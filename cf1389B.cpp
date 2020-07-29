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
        int n, k, z;
        cin >> n >> k >> z;
        int max = 0, ml = 0, sum = 0, cnt = 0;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if ((i > 0) && (a[i] + a[i - 1] > max) && (i <= k))
            {
                max = a[i] + a[i - 1];
                ml = i;
            }
            if (i <= k)
                sum += a[i];
        }
        for (int i = k - 1; i > ml; i -= 2)
        {
            if (cnt >= z)
                break;
            else
            {
                cnt++;
                sum -= a[i] + a[i - 1];
                sum += max;
            }
        }
        cout << sum << "\n";
    }
    return 0;
}
