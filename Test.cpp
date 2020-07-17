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
#include <string>
#include <vector>
#define fast_io()                \
    ios::sync_with_stdio(false); \
    std::cin.tie(0);
#define mod 998244353
typedef long long ll;
typedef long double ld;
using namespace std;
const int N = 100010;
int stack[N], a[N], l[N], r[N];
long long sum[N];  // sum[i]是前缀和，即前i个数的总和

int main()
{
    ll ans = 0;
    for (int i = 1; i < 100; i++)
        ans += i * 100;
    cout << ans;
    return 0;
}