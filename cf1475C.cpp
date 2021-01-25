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

struct PAIR
{
    int a;
    int b;
};

int main()
{
    fast_io();
    int T;
    cin >> T;
    while (T--)
    {
        int a, b, k;
        cin >> a >> b >> k;
        PAIR pairs[k];
        set<int> aa, bb;
        ll del = 0;
        for (int i = 0; i < k; i++)
        {
            cin >> pairs[i].a;
            if (aa.find(pairs[i].a) != aa.end())
                del++;
            else
                aa.insert(pairs[i].a);
        }

        for (int i = 0; i < k; i++)
        {
            cin >> pairs[i].b;
            if (bb.find(pairs[i].b) != bb.end())
                del++;
            else
                bb.insert(pairs[i].b);
        }

        ll cnt = k * (k - 1) / 2;

        cout << cnt - del << "\n";
    }

    return 0;
}