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
    ll id;
    ll w;
};

int cmp(item a, item b)
{
    return a.w < b.w;
}

int main()
{
    fast_io();
    int T;
    cin >> T;
    while (T--)
    {
        ll n, W;
        cin >> n >> W;
        item w[n];
        vector<int> ans;
        for (ll i = 0; i < n; i++)
        {
            cin >> w[i].w;
            w[i].id = i + 1;
        }

        sort(w, w + n, cmp);
        bool sov = false;
        ll now = 0;
        for (ll i = n - 1; i >= 0; i--)
        {
            if ((now + w[i].w) <= W)
            {
                now += w[i].w;
                ans.push_back(w[i].id);
            }
            if (now >= (W + 1) / 2)
            {
                sov = true;
                break;
            }
        }
        if (sov)
        {
            cout << ans.size() << "\n";
            for (auto i : ans)
                cout << i << " ";
            cout << "\n";
        }
        else
            cout << "-1\n";
    }

    return 0;
}