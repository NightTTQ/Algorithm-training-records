//#include <bits/stdc++.h>
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iomanip>
#include <iostream>
#include <map>
#include <queue>
#include <set>
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
    int T;
    cin >> T;
    while (T--)
    {
        ll n, k;
        cin >> n >> k;
        ll pr = -1, no = -1, ne = -1, cn = 0;
        vector<int> peak(n);
        for (ll i = 0; i < n; i++)
        {
            pr = no;
            no = ne;
            cin >> ne;
            if (no > ne && no > pr && pr != -1 && no != -1)
                cn++;
            peak[i] = cn;
        }
        ll mp = -1, ml = -1;
        for (ll i = 0; i + k - 1 < n; i++)
        {
            ll p = peak[i + k - 1] - peak[i + 1];
            if (p > mp)
            {
                mp = p;
                ml = i + 1;
            }
        }
        cout << mp + 1 << " " << ml << "\n";
    }

    return 0;
}