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
    int n;
    cin >> n;
    char c[n];
    bool flag = false;
    int ans = 0;
    cin >> c;
    for (int i = 0; i < n; i++)
    {
        int j;
        if (i == 0 && c[i] == '1')
        {
            for (j = i + 1; j < n; j++)
            {
                if (c[j] == '0')
                {
                    ans++;
                    i = j;
                    break;
                }
                if (j >= n - 1 && c[n - 1] == '1')
                    flag = true;
            }
            if (j >= n - 1 && c[n - 1] == '1')
                flag = true;
        }

        else if (c[i] == '1')
        {
            ans++;
            for (j = i + 1; j < n; j++)
            {
                if (c[j] == '0')
                {
                    ans++;
                    i = j;
                    break;
                }
                if (j >= n - 1 && c[n - 1] == '1')
                    flag = true;
            }
            if (j >= n - 1 && c[n - 1] == '1')
                flag = true;
        }
        if (flag)
        {
            ans++;
            break;
        }
    }
    cout << ans;
    return 0;
}