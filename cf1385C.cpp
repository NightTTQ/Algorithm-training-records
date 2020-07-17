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
        int n;
        cin >> n;
        int a[n];
        int up = n;
        bool flag = false;
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = n - 1; i > 0; i--)
        {
            if (a[i - 1] < a[i])
            {
                up = i;
                break;
            }
        }
        if (up != n)
        {
            for (int i = up; i > 0; i--)
            {
                if (a[i - 1] > a[i])
                {
                    cout << i << "\n";
                    flag = true;
                    break;
                }
            }
        }
        if (!flag)
            cout << "0\n";
    }
    return 0;
}