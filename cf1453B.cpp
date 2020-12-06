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
int chafen(vector<ll> a, int loc, char fx)
{
    int sum = 0;
    if (fx == 'l')
    {
        for (int i = 1; i < a.size(); i++)
        {
            if (i == loc)
                continue;
            else
                sum += abs(a[i] - a[i - 1]);
        }
    }
    else
    {
        for (int i = 1; i < a.size(); i++)
        {
            if ((i - 1) == loc)
                continue;
            else
                sum += abs(a[i] - a[i - 1]);
        }
    }
    return sum;
}

int main()
{
        fast_io();
    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        vector<ll> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        vector<ll> b;
        for (int i = 1; i < n; i++)
            b.push_back(abs(a[i] - a[i - 1]));
        ll sum = 0;
        for (auto i : b)
            sum += i;
        ll _min = INT_MAX;
        ll min_loc = 0;
        char min_op;
        for (int i = 0; i < n; i++)
        {
            if (i == 0)
            {
                _min = chafen(a, i, 'r');
                min_loc = i;
                min_op = 'r';
            }

            else if (i == n - 1)
            {
                if (chafen(a, i, 'l') < _min)
                {
                    _min = chafen(a, i, 'l');
                    min_loc = i;
                    min_op = 'l';
                }
            }

            else
            {
                if (chafen(a, i, 'l') < _min)
                {
                    _min = chafen(a, i, 'l');
                    min_loc = i;
                    min_op = 'l';
                }
                if (chafen(a, i, 'r') < _min)
                {
                    _min = chafen(a, i, 'r');
                    min_loc = i;
                    min_op = 'r';
                }
            }
        }
        if (min_loc == 'l')
            a[min_loc] = a[min_loc - 1];
        else
            a[min_loc] = a[min_loc + 1];
        ll ans = 0;
        for (int i = a.size() - 1; i > 0; i--)
            ans += abs(a[i] - a[i - 1]);
        cout << ans << "\n";
    }

    return 0;
}