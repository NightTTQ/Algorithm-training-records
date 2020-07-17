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
        int a[2 * n];
        map<int, int> re;
        vector<int> ans;
        for (int i = 0; i < 2 * n; i++)
        {
            cin >> a[i];
            if (re[a[i]] == 0)
            {
                re[a[i]] = 1;
                ans.push_back(a[i]);
            }
        }
        for (auto i : ans)
            cout << i << " ";
        cout << "\n";
    }
    return 0;
}