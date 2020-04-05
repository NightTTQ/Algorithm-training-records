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
struct note
{
    int id=0;
    int num=0;
    double yuan=0.0;
}rp[10001];
int cmp(note f,note a)
{
    if(f.yuan!=a.yuan)
        return f.yuan > a.yuan;
    else if(f.num!=a.num)
        return f.num > a.num;
    else
        return f.id < a.id;
}
bool flag[10001];
int main()
{
    fast_io();
    int n;
    cin >> n;
    for (int i = 1; i <= n;i++)
    {
        rp[i].id = i;
        rp[i].yuan = 0;
        rp[i].num = 0;
    }
    for (int i = 1; i <= n; i++)
    {
        int k;
        cin >> k;
        memset(flag, 0, sizeof(flag));
        int m, p;
        for (int j = 0; j < k; j++)
        {
            cin >> m >> p;
            if (!flag[m])
            {
                rp[i].yuan -= p;
                rp[m].yuan += p;
                rp[m].num++;
                flag[m] = true;
            }

                
        }
    }
    sort(rp+1, rp + n+1,cmp);
    for(int i = 1; i <= n; i++)
        cout << rp[i].id << " " <<fixed<<setprecision(2)<< rp[i].yuan*0.01 << "\n";
    return 0;
}