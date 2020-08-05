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
    // fast_io();
    int T;
    cin >> T;
    while (T--)
    {
        string s;
        int n;
        int cnt = 0;
        cin >> n;
        getchar();
        for (int i = 0; i < n; i++)
        {
            getline(cin, s);
            for (auto c : s)
                if (c == '2')
                {
                    cnt++;
                    break;
                }
        }
        double ans = (double)cnt / n;
        cout << fixed << setprecision(10) << ans << "\n";
    }
    return 0;
}
