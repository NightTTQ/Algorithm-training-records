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
    int a[6];
    for (int i = 0; i < 6; i++)
        cin >> a[i];
    int n;
    cin >> n;
    vector<int> m(n);
    for (int i = 0; i < n; i++)
        cin >> m[i];
    sort(m.begin(), m.end());
    int mm = m[n - 1] -

             return 0;
}