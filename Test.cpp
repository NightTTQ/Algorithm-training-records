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
#include <string>
#include <vector>
#define fast_io()                \
    ios::sync_with_stdio(false); \
    std::cin.tie(0);
#define mod 998244353
typedef long long ll;
typedef long double ld;
using namespace std;
const int N = 100010;
int stack[N], a[N], l[N], r[N];
long long sum[N];  // sum[i]是前缀和，即前i个数的总和

int main()
{
    string s, t, temp;
    map<char, int> a1;
    int cnt1 = 0, ans = 0;
    cin >> s >> t;
    for (auto i : s)
    {
        if (a1[i] == 0)
        {
            a1[i] = 1;
            cnt1++;
        }
    }

    for (int i = 0; i < t.length() - s.length() + 1; i++)
    {
        temp = t.substr(i, s.length());
        map<char, int> a2;
        int cnt2 = 0;
        for (auto j : temp)
        {
            if (a2[j] == 0)
            {
                a2[j] = 1;
                cnt2++;
            }
        }
        if (cnt1 == cnt2)
            ans++;
        // cout << temp << endl;
    }
    cout << ans;
    return 0;
}