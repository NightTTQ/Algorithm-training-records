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
int all[100005];

int get(int loc)
{
    cout << "? " << loc << "\n";
    cout.flush();
    int t;
    cin >> t;
    all[loc] = t;
    return t;
}

int check(int loc)
{
    for (int i = loc; i <= loc; i++)
    {
        if (all[i] == 1)
            return i;
        if (all[i - 1] != -1 && all[i] != -1 && all[i + 1] != -1 &&
            all[i - 1] > all[i] && all[i] < all[i + 1])
            return i;
    }
    return 0;
}
//上次查询的位置，这次查询的位置，上次的值，这次的值，n
int search(int oldloc, int newloc, int oldvalue, int newvalue, int n)
{
    int c = check(newloc);
    if (c)
        return c;
    if (oldvalue < newvalue)
        return search(newloc, (oldloc + newloc) / 2, newvalue,
                      get((oldloc + newloc) / 2), n);
    else
    {
        if (oldloc < newloc)
            return search(newloc, (n + newloc) / 2, newvalue,
                          get((n + newloc) / 2), n);
        else
            return search(newloc, (1 + newloc) / 2, newvalue,
                          get((1 + newloc) / 2), n);
    }
}

int main()
{
    fast_io();
    memset(all, -1, sizeof(all));
    int n;
    cin >> n;
    all[0] = all[n + 1] = 100005;
    int ans = search(0, n / 2, 100005, get(n / 2), n);
    cout << "! " << ans;
    return 0;
}