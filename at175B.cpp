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
    int n;
    ll ans = 0;
    cin >> n;
    ll l[n];
    for (int i = 0; i < n; i++)
        cin >> l[i];
    sort(l, l + n);
    for (int i = 0; i < n - 2; i++)
        for (int j = i + 1; j < n - 1; j++)
            for (int k = j + 1; k < n; k++)
            {
                if (l[i] == l[j] || l[i] == l[k] || l[j] == l[k])
                    continue;
                if ((l[i] + l[j] > l[k]))
                    if ((l[j] + l[k] > l[i]))
                        if ((l[k] + l[i] > l[j]))
                            ans++;
            }
    cout << ans;
    return 0;
}
