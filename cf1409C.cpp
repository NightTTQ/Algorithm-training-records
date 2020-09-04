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
        ll n, x, y;
        cin >> n >> x >> y;
        ll t = y - x;
        ll nn = n;
        do
        {
            nn--;

        } while (t % nn);
        ll gap = t / nn;
        ll cnt = 0;
        if (nn < n - 1)
        {
            for (ll i = x - gap; i > 0 && cnt + nn + 1 < n; i -= gap, cnt++)
                cout << i << " ";
        }
        for (ll i = x; i <= y; i += gap)
            cout << i << " ";
        if (cnt + nn + 1 < n)
            for (int i = cnt + nn + 1; i < n; i++)
            {
                y += gap;
                cout << y << " ";
            }
        cout << "\n";
    }
    return 0;
}
