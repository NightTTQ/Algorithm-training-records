//#include <bits/stdc++.h>
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <string>
#include <iomanip>
#include <iostream>
#include <vector>    
#include <cstdlib>
#include <set>
#include <map>
#include <queue>
#define fast_io()                \
    ios::sync_with_stdio(false); \
    std::cin.tie(0);
typedef long long ll;
typedef long double ld;
ll mod = 10e9 + 7;
using namespace std;
struct node
{
    vector<int> chil;
};
int dfs(node tr,int x,int d)
{
    if(tr[x].chil.size()==0)
        return d;
}

int main()
{
    int n, k;
    int u, v;
    cin >> n >> k;
    node tr[n+1];
    for (int i = 0; i < n - 1;i++)
    {
        cin >> u >> v;
        tr[u].chil.push_back(v);
    }

    return 0;
}