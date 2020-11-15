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
        int n, m;
        cin >> n >> m;
        int all[n * m];
        int sum = 0;
        int fushu = 0;
        for (int i = 0; i < n * m; i++)
        {
            cin >> all[i];
            if (all[i] < 0)
                fushu++;
            all[i] = abs(all[i]);
        }

        for (int i = 0; i < n * m; i++)
        {
            sum += abs(all[i]);
        }

        if (fushu % 2)
        {
            sort(all, all + (n * m));
            sum -= 2 * all[0];
            cout << sum << "\n";
        }
        else
            cout << sum << "\n";
    }

    return 0;
}