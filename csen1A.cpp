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
    int n, m, ans;
    cin >> n >> m;
    ans = n;
    int arr[n], a;
    memset(arr, 1, sizeof(arr));
    for (int i = 0; i < m; i++)
    {
        cin >> a;
        int aa = a;
        while (a <= n)
        {
            if (arr[a])
            {
                arr[a] = 0;
                ans--;
            }
            a += aa;
        }
    }
    cout << ans;
    return 0;
}