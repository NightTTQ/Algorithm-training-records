//#include <bits/stdc++.h>
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iomanip>
#include <iostream>
#include <map>
#include <queue>
#include <set>
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
        vector<int> ans;
        set<int> num;
        int n, k;
        cin >> n >> k;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (num.find(a[i]) == num.end())
            {
                num.insert(a[i]);
                ans.push_back(a[i]);
            }
        }
        while (ans.size() < k)
            ans.push_back(ans[ans.size() - 1]);
        if (num.size() > k)
        {
            cout << "-1\n";
            continue;
        }
        else
        {
            cout << ans.size() * n << "\n";
            for (int i = 0; i < n; i++)
                for (auto i : ans)
                    cout << i << " ";
            cout << "\n";
        }
    }
    return 0;
}