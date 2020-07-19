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

struct item
{
    ll root;
    ll size;
};

vector<item> items;

ll find(const ll child)
{
    if (items[child].root == child)
        return items[child].root;
    items[child].root = find(items[child].root);
    return items[child].root;
}

void know(ll a, ll b)
{
    ll ra = find(a);
    ll rb = find(b);
    if (ra == rb)
        return;
    if (ra == 0)
    {
        items[rb].root = items[ra].root;
        items[ra].size += items[rb].size;
    }
    else
    {
        items[ra].root = items[rb].root;
        items[rb].size += items[ra].size;
    }
}

int main()
{
    fast_io();
    int n, m;
    int type, x, y;
    cin >> n >> m;
    for (ll i = 0; i <= n; i++)
        items.push_back(item{i, 1});
    items[0].size = 0;
    for (int i = 0; i < m; i++)
    {
        cin >> type;
        if (type == 1)
        {
            cin >> x;
            know(0, x);
        }
        else if (type == 2)
        {
            cin >> x >> y;
            know(x, y);
        }
        cout << items[0].size << "\n";
    }

    return 0;
}