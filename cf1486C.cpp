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

int get(int l, int r)
{
    cout << "? " << l << ' ' << r << '\n';
    cout.flush();
    int t;
    cin >> t;
    return t;
}

int search(int l, int r, int last, bool isleft)
{
    if (r - l == 1)
    {
        if (isleft)
            return r + 1;
        else
            return l - 1;
    }
    int cur = get(l, r);
    if (cur < last)  //向另半边搜索
    {
        if (isleft)
            return search(r, r + (r - l), cur, false);
        else
            return search(l - (r - l), l, cur, true);
    }
    else  //二分
    {
        return search(l, (r + l) / 2, cur, true);
    }
}

int main()
{
    fast_io();
    memset(all, -1, sizeof(all));
    int n;
    cin >> n;

    int ans = search(1, n, 0, false);
    cout << "! " << ans;
    return 0;
}