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
        int flag = 1;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] != i + 1)
                flag = 0;
        }
        if (flag == 1)
            cout << "0\n";
        else if (a[0] == 1 || a[n - 1] == n)
            cout << "1\n";
        else if (a[0] == n && a[n - 1] == 1)
            cout << "3\n";
        else
            cout << "2\n";
    }
    return 0;
}