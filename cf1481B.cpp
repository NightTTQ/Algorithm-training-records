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
        int n, k;
        cin >> n >> k;
        vector<int> h(n);
        for (int i = 0; i < n; i++)
            cin >> h[i];
        ll cnt = 0, loc = 0;
        while (cnt < k)
        {
            for (int i = 0; i < n; i++)
            {
                loc = i;
                if (i == n - 1)
                {
                    loc = -2;
                    cnt = k;
                    break;
                }
                if (h[i] < h[i + 1])
                {
                    cnt++;
                    h[i]++;
                    break;
                }
            }
        }
        cout << loc + 1 << '\n';
    }
    return 0;
}