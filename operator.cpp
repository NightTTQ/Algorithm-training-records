//#include <bits/stdc++.h>
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <functional>
#include <iomanip>
#include <iostream>
#include <list>
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

#include "./fraction.h"

using namespace std;

static ll gcd(ll m1, ll m2)
{
    while (m2)
    {
        ll m = m1;
        m1 = m2;
        m2 = m % m2;
    }
    return abs(m1);
}

void fraction::standardize()
{
    if (num == 0 || den == 0)
    {
        num = 0;
        den = 0;
        return;
    }
    if (den < 0)
    {
        num = -num;
        den = -den;
    }
    ll g = gcd(num, den);
    num /= g;
    den /= g;
}
fraction::fraction(ll n, ll d) : num(n), den(d)
{
    standardize();
}
friend fraction operator-(fraction f)
{
    return fraction(-f.num, f.den);
}
int main()
{
    fast_io();
    fraction a(6, 5);
    cout << a;
    return 0;
}