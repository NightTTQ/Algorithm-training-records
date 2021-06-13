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
#define mod 1000000007
typedef long long ll;
typedef long double ld;
using namespace std;

int main()
{
    fast_io();
    int n;
    cin >> n;
    vector<int> b(n), g(n);
    int ans = 0;
    for (auto &i : b)
        cin >> i;
    for (auto &i : g)
        cin >> i;
    int t = 0;
    do
    {
        bool used[n];
        memset(used, false, sizeof(used));
        for (auto i : b)
            for (int j = 0; j < n; j++)
                if (used[j] == false && __gcd(i, g[j]) > 1)
                {
                    t++;
                    used[j] = true;
                    break;
                }
        ans = max(ans, t);
        t = 0;
    } while (next_permutation(begin(b), end(b)));

    cout << ans;
    return 0;
}