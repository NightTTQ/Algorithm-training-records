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

int main()
{
    fast_io();
    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        vector<int> a(7);
        a = {7, 27, 41, 49, 63, 78, 108};
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            int t;
            cin >> t;
            sum += a[t - 1];
        }
        if (sum >= 120)
            cout << sum - 50 << "\n";
        else if (sum >= 89)
            cout << sum - 30 << "\n";
        else if (sum >= 69)
            cout << sum - 15 << "\n";
        else
            cout << sum << "\n";
    }
    return 0;
}