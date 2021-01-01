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

struct _class
{
    int a;
    int b;
    int c;
};

int cmp(_class a, _class b)
{
    return a.b < b.b;
}

int main()
{
    fast_io();
    int n, r;
    cin >> n >> r;
    _class classes[n];
    int now = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> classes[i].a >> classes[i].b >> classes[i].c;
        now += classes[i].a;
    }

    sort(classes, classes + n, cmp);
    int ans = 0;
    // need plus r-now
    for (int i = 0; i < n; i++)
    {
        if ((classes[i].c - classes[i].a) + now <= r)
        {
            ans += (classes[i].c - classes[i].a) * classes[i].b;
            now += classes[i].c - classes[i].a;
        }
        else
        {
            ans += (r - now) * classes[i].b;
            now = r;
        }
        if (now == r)
            break;
    }
    cout << ans;
    return 0;
}