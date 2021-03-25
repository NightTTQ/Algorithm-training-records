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
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        int ans = 0, one = -1, two = -1, last = -1;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '*')
            {
                ans++;
                s[i] = 'x';
                one = i;
                break;
            }
        }
        for (int i = n - 1; i > 0; i--)
        {
            if (s[i] == '*')
            {
                ans++;
                s[i] = 'x';
                two = i;
                break;
            }
        }

        for (int i = one + 1; i < n; i++)
        {
            if (s[i] == '*')
            {
                if (i - one > k)
                {
                    one = last;
                    ans++;
                }
                last = i;
            }
        }
        if (two - one > k)
            ans++;
        cout << ans << "\n";
    }

    return 0;
}