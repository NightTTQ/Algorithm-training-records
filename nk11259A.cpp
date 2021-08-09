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
#define MOD 1000000007
typedef long long ll;
typedef long double ld;
using namespace std;

long long multi(long long a, long long b, long long mod)
{
    long long temp = a, sum = 0;
    while (b)
    {
        if (b & 1)
            sum = (sum + temp) % mod;
        temp = (temp + temp) % mod;
        b = b >> 1;
    }
    return sum;
}

long long Modular_exponent(long long a, long long x,
                           long long mod)  // a ^ x mod MOD.
{
    long long t = a % mod, r = 1;
    while (x)
    {
        if (x & 1)
            r = multi(r, t, mod);
        t = multi(t, t, mod);
        x = x >> 1;
    }
    return r;
}

// Carmicheal number: 561,41041,825265,321197185
bool Miller_Rabin(long long n)  // 如果是素数，则返回1，否则返回0.
{
    long long time = 20;
    if (n < 2)
        return false;
    if (n == 2)
        return true;
    bool flag = false;
    for (long long k = 0; k <= time; ++k)
    {
        flag = false;
        long long d = n - 1, r = 0, t, a = rand() % (n - 2) + 2;
        while ((d & 1) == 0)
        {
            d = d >> 1;
            r++;
        }
        t = Modular_exponent(a, d, n);
        if (t == 1 || t == n - 1)
        {
            flag = true;
            continue;
        }
        for (long long i = 1; i < r; i++)
        {
            t = multi(t, t, n);
            if (t == 1)
            {
                flag = false;
                return flag;
            }
            if (t == n - 1)
            {
                flag = true;
                break;
            }
        }
        if (!flag)
            break;
    }
    return flag;
}

bool ok(ll n)
{
    if (n % 400 == 0)
        return 1;
    if (n % 100 == 0)
        return 0;
    if (n % 4 == 0)
        return 1;
    return 0;
}

int main()
{
    fast_io();
    int T;
    cin >> T;
    while (T--)
    {
        ll a;
        cin >> a;
        if (Miller_Rabin(a) && ok(a))
            cout << "yes\n";
        else
            cout << "no\n";
    }
    return 0;
}