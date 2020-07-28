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

struct lines
{
    int l;
    int r;
    int c;
};

int cmp(lines l1, lines l2)
{
    return (l1.r - l1.l) > (l2.r - l2.l);
}

int main()
{
    fast_io();
    int n, m;
    cin >> n >> m;
    lines line[n];
    for (int i = 0; i < n; i++)
        cin >> line[i].l >> line[i].r >> line[i].c;
    sort(line, line + n, cmp);
    int ans = 0, cnt = 0;
    for (int i = 0; i < n; i++)
        if (cnt < m)
        {
            if (i == 0)
            {
                ans += line[i].r - line[i].l;
                cnt++;
            }
            else if (line[i].c != line[i - 1].c)
            {
                ans += line[i].r - line[i].l;
                cnt++;
            }
        }
    cout << ans;

    return 0;
}