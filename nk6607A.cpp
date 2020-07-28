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
    set<pair<int, int>> m;
    int u, v;
    int cnt = 0;
    for (int i = 0; i < n - 1; i++)
    {
        cin >> u >> v;
        if (u < v)
            m.insert(make_pair(u, v));
        else
            m.insert(make_pair(v, u));
    }
    for (int i = 0; i < n - 1; i++)
    {
        cin >> u >> v;
        if (u < v)
        {
            if (m.find(make_pair(u, v)) == m.end())
                cnt++;
            else
                m.erase(make_pair(u, v));
        }
        else
        {
            if (m.find(make_pair(v, u)) == m.end())
                cnt++;
            else
                m.erase(make_pair(v, u));
        }
    }
    cnt += m.size();
    cout << cnt / 2;
    return 0;
}