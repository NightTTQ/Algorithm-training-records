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
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    sort(a, a + n);
    int max = 0, ans = 0;
    for (int i = 2; i <= a[n - 1]; i++)
    {
        int num = 0;
        for (int j = 0; j < n; j++)
        {
            if (a[j] % i == 0)
                num++;
        }
        if (num > max)
        {
            max = num;
            ans = i;
        }
    }
    cout << ans;
    return 0;
}