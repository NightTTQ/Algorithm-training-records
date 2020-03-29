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

int main()
{
    fast_io();
    int n;
    double z, r, sum = 0.0;
    cin >> n >> z >> r;
    r = (1 - r / 100.0);
    int dedao[100001];
    vector<int> td[100001];
    for(int i=0; i<n; i++)
    {
        int k, x;
        cin >> k;
        if(!k)
        {
            cin >> x;
            dedao[i] = x;
        }
        else
        {
            
            for (int j = 0; j < k;j++)
            {
                cin >> x;
                td[i].push_back(x);
            }
        }
    }
    int t;
    int list[100001];
    double ans = 0;
    queue<int> q;
    q.push(0);
    list[0] = 0;
    while (!q.empty())
    {
        t=q.front();
        q.pop();
        for (int i = 0; i <td[t].size();i++)
        {
            list[td[t][i]] = list[t] + 1;
            if(dedao[td[t][i]])
                ans += z * pow(r, list[td[t][i]]) * dedao[td[t][i]];
            else
                q.push(td[t][i]);
        }
    }
    if(n==1&&dedao[0])
        ans = z * dedao[0];
    cout << (int)ans;
    return 0;
}