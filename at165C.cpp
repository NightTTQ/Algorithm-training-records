//#include <bits/stdc++.h>
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iomanip>
#include <iostream>
#include <map>
#include <queue>
#include <set>
#include <string>
#include <vector>
#define fast_io()                \
    ios::sync_with_stdio(false); \
    std::cin.tie(0);
#define mod 998244353
typedef long long ll;
typedef long double ld;
using namespace std;
struct node
{
    int a, b, c, d;
};

int main()
{
    fast_io();
    int n, m, q;
    cin >> n >> m >> q;

    node num[q];
    for (int i = 0; i < q; i++)
        cin >> num[i].d >> num[i].b >> num[i].c >> num[i].d;

    return 0;
}