// submitted by HNUST025
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
#define mod 1000000007
typedef long long ll;
typedef long double ld;
using namespace std;
ll ans[64];

int main()
{
    fast_io();
    int T;
    cin >> T;
    ans[0] = 1;
    ans[1] = 2;
    for (int i = 2; i < 63; i++)
    {
        ans[i] = ans[i - 1] * 2;
    }
    while (T--)
    {
        ll a;
        cin >> a;
        if (a == 0 || a == 1)
        {
            cout << "0\n";
            continue;
        }
        for (int i = 0; i < 64; i++)
        {
            if (ans[i] >= a)
            {
                cout << ans[i - 1] - 1 << "\n";
                break;
            }
        }
    }
    return 0;
}