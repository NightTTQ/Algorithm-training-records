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
    vector<ll> s(n);
    for (auto &i : s)
        cin >> i;
    sort(s.begin(), s.end());
    vector<ll> dif;
    ll last = 0;
    for (int i = 1; i < n; i++)
    {
        dif.push_back(last + s[i] - s[i - 1]);
        last = dif[dif.size() - 1];
    }

    ll ans = 0;
    for (auto i : dif)
        ans += i;
    if (s[n - 1] == s[n - 2])
        ans -= last;
    cout << ans;
    return 0;
}