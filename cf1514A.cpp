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
        vector<int> a(n);
        for (auto &i : a)
            cin >> i;
        int tmp = 0;
        // bool flag = false;
        for (int i = 0; i < n; i++)
        {
            for (int j = 1; j <= 100; j++)
            {
                if (j * j == a[i])
                {
                    if (j * j == a[i])
                        tmp++;
                }
            }
        }
        if (tmp != n)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}