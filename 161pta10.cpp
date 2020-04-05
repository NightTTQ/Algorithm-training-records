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
#define mod 998244353
typedef long long ll;
typedef long double ld;
using namespace std;
int father[101];
int net[101][101];
int findf(int x)
{
    if(x!=father[x])
        father[x] = findf(father[x]);
    return father[x];
}
void init(int n)
{
    for (int i = 0; i <= n;i++)
        father[i] = i;
}
void work(int a,int b,int r)
{
    if(r==1)
    {
        int x=findf(a);
        int y=findf(b);
        if(x==y)
            return;
        if(x<y)
            father[b] = a;
        else
            father[a] = b;
    }
    else
        net[a][b] = net[b][a] = -1;
}
int main()
{
    fast_io();
    int n, m, k;
    cin>>n>>m>>k;
    init(n);
    memset(net, 0, sizeof(net));
    for(int i = 1; i <= m;i++)
    {
        int a, b, r;
        cin>>a>>b>>r;
        work(a,b,r);
    }
    int x, y;
    for (int i = 0;i<k; i++)
    {
        cin>>x>>y;
        if(findf(x)==findf(y)&&net[x][y]!=-1)
            cout << "No problem\n";
        else if(findf(x)==findf(y)&&net[x][y]==-1)
            cout << "OK but...\n";
        else if(findf(x)!=findf(y)&&net[x][y]==-1)
            cout << "No way\n";
        else
            cout << "OK\n";
    }

        return 0;
}