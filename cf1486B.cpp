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
        int n;
        cin >> n;
        vector<ll> x(n), y(n);
        for (int i = 0; i < n; i++)
            cin >> x[i] >> y[i];
        sort(x.begin(), x.end());
        sort(y.begin(), y.end());
        if (n % 2)  //奇数个，答案唯一
        {
            cout << "1\n";
        }
        else
        {
            ll diffx = (x[n / 2] - x[(n - 1) / 2]) + 1;
            ll diffy = (y[n / 2] - y[(n - 1) / 2]) + 1;

            cout << diffx * diffy << "\n";
        }
    }

    return 0;
}