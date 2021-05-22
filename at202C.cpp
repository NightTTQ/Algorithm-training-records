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

int main()
{
    fast_io();
    int n;
    cin >> n;
    vector<int> a(n), b(n), c(n);
    map<int, int> num;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
        cin >> b[i];
    for (int i = 0; i < n; i++)
    {
        cin >> c[i];
        num[b[c[i] - 1]]++;
    }
    ll ans = 0;
    for (int i = 0; i < n; i++)
        ans += num[a[i]];
    cout << ans;
    return 0;
}