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
    int T;
    cin >> T;
    while (T--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        int _max = max({a, b, c});
        int _min = min({a, b, c});
        int sum = a + b + c;
        if (sum % 9 == 0 && sum / 9 <= _min)
            cout << "YES\n";
        else
            cout << "NO\n";
        // int diff = _max - _min;
        /*
        int sum = a - _min + b - _min + c - _min;
        int cnt = sum / 7;
        if ((_min - cnt) > 0)
        {
            int front = (a + b + c - 3 * _min) % 7;
            sum = 3 * (_min - cnt) + front;
            if (front != 3 && front != 0)
            {
                cout << "NO\n";
                continue;
            }

            if (sum >= 9 && sum % 7 == 2)
                cout << "YES\n";
            else
                cout << "NO\n";
        }
        else
            cout << "NO\n";
            */
    }
    return 0;
}