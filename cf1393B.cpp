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
    cin >> n;
    map<int, int> wood;
    int t, cnt2 = 0, cnt4 = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> t;
        cnt4 -= wood[t] / 4;
        cnt2 -= (wood[t] % 4) / 2;
        wood[t]++;
        cnt4 += wood[t] / 4;
        cnt2 += (wood[t] % 4) / 2;
    }
    int q;
    cin >> q;
    char c;
    int o;
    for (int i = 0; i < q; i++)
    {
        cin >> c >> o;
        cnt4 -= wood[o] / 4;
        cnt2 -= (wood[o] % 4) / 2;
        if (c == '+')
            wood[o]++;
        if (c == '-')
            wood[o]--;
        cnt4 += wood[o] / 4;
        cnt2 += (wood[o] % 4) / 2;
        if (cnt4 >= 2 || (cnt4 == 1 && cnt2 >= 2))
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}
