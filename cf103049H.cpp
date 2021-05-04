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
#include <vector>

#define fast_io()                \
    ios::sync_with_stdio(false); \
    std::cin.tie(0);
#define mod 998244353
#define N 1000007
typedef long long ll;
typedef long double ld;
using namespace std;

int main()
{
    fast_io();
    int n;
    cin >> n;
    vector<int> num(n);
    vector<int> ans;
    for (auto &i : num)
        cin >> i;
    sort(num.begin(), num.end());
    int l = (n - 1) / 2;
    int r = l + 1;

    for (int i = 1; i <= n; i++)
    {
        if (i % 2)
        {
            ans.push_back(num[l]);
            l--;
        }
        else
        {
            ans.push_back(num[r]);
            r++;
        }
    }
    for (auto i : ans)
        cout << i << " ";
    return 0;
}