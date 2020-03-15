//#include <bits/stdc++.h>
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <string>
#include <iomanip>
#include <iostream>
#include <vector>
#include <stack>
#define fast_io()                \
    ios::sync_with_stdio(false); \
    std::cin.tie(0);
typedef long long ll;
typedef long double ld;
using namespace std;
int ans = 0;
struct doo
{
    int k;
    int d[100001];
}door[100001];
inline void dfs(doo now,int deep)
{
    for (int i = 0; i < now.k;i++)
        dfs(door[now.d[i]], deep + 1);
    ans = max(ans, deep);
}

int main()
{
    fast_io();
    int n;
    cin >> n;
    for (int i = 0; i < n;i++)
    {
        cin >> door[i].k;
        for (int j = 0; j < door[i].k;j++)
            cin >> door[i].d[j];
    }
    
    for (int i = 0; i < n;i++)
        dfs(door[i], 1);
        
    cout << ans;
    return 0;
}