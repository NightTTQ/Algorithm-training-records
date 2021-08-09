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
    vector<ll> all(n);
    map<ll, ll> cnt;
    for (auto &i : all)
    {
        cin >> i;
        cnt[i]++;
    }
    ll ans = 0;
    for (auto i : cnt)
        for (auto j : cnt)
            if (cnt[i.first * j.first])
                ans += i.second * j.second * cnt[i.first * j.first];
    cout << ans;
    return 0;
}