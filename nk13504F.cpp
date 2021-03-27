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
    int T;
    cin >> T;
    while (T--)
    {
        ll n, k, a, b;
        cin >> n >> k >> a >> b;
        vector<int> aa(n), bb(n);
        map<int, int> bcard;
        map<int, int> del;
        for (int i = 0; i < n; i++)
        {
            cin >> aa[i] >> bb[i];
            bcard[bb[i]]++;
        }

        ll ali = 0, bob = k;
        for (int i = 0; i < n; i++)
        {
            if (bcard[aa[i]] != 0)
            {
                bcard[aa[i]]--;
                del[aa[i]]++;
                ali += 2 * aa[i];
            }
            else
            {
                ali += aa[i];
            }
            if (del[bb[i]] != 0)
            {
                del[bb[i]]--;
            }
            else
            {
                bob += bb[i];
                bcard[bb[i]]--;
            }
        }
        if (ali > bob)
            cout << "Yes\n";
        else
            cout << "No\n";
    }

    return 0;
}