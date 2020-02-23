//#include <bits/stdc++.h>
#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <cmath>
#include <iomanip>
#define fast_io()                \
    ios::sync_with_stdio(false); \
    std::cin.tie(0);
typedef long long ll;
typedef long double ld;
using namespace std;

int main()
{
    fast_io();
    ll n, sum = 0, ans1 = 0, ans2 = 0;
    int x[101];
    cin >> n;
    for (int i = 0; i < n;i++)
    {
        cin >> x[i];
        sum += x[i];
    }
    int mid1,mid2;
    mid1 = sum / n;
    mid2 = mid1 + 1;
    for (int i = 0; i < n;i++)
    {
        ans1 += (x[i] - mid1) * (x[i] - mid1);
        ans2 += (x[i] - mid2) * (x[i] - mid2);
    }
    cout << min(ans1, ans2);

    system("pause");
    return 0;
}