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

struct drink
{
    ll v;
    ll p;
};

int cmp(drink a, drink b)
{
    return (a.p * a.v) < (b.p * b.v);
}

int main()
{
    fast_io();
    ll n, x;
    cin >> n >> x;
    drink drinks[n];
    for (int i = 0; i < n; i++)
        cin >> drinks[i].v >> drinks[i].p;
    ll vol = 0;
    ll cnt = 0;
    for (int i = 0; i < n; i++)
    {
        vol += drinks[i].v * drinks[i].p;
        if (vol > x * 100)
        {
            cnt = i + 1;
            break;
        }
    }
    if (cnt)
        cout << cnt;
    else
        cout << "-1";
    return 0;
}