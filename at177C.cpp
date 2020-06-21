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
    ll n, t, o;
    stack<char> ans;
    cin >> n;
    while (n)
    {
        n -= 1;
        o = n % 26;
        n /= 26;
        ans.push('a' + o);
    }
    while (!ans.empty())
    {
        cout << ans.top();
        ans.pop();
    }

    return 0;
}