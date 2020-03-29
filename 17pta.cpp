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
#define fast_io()                \
    ios::sync_with_stdio(false); \
    std::cin.tie(0);
#define mod 998244353
typedef long long ll;
typedef long double ld;
using namespace std;
int cmp(ll a, ll b)
{
    return a > b;
}
int main()
{
    fast_io();
    int n;
    cin >> n;
    string s;
    string ans[5001];
    map<string, int> guanzhu;
    for(int i = 0; i < n;i++)
    {
        cin >> s;
        guanzhu[s] = 1;
    }
    int m;
    cin >> m;
    int zan;
    ll sum = 0;
    map<string, int> dianzan;
    string list[5001];
    for (int i = 0; i < m;i++)
    {
        cin >> s >> zan;
        dianzan[s] = zan;
        sum += zan;
    }
    double avg;
    avg = (double)sum / m;
    int num = 0;
    for (auto i:dianzan)
    {
        if(i.second>avg&&guanzhu[i.first]!=1)
            ans[num++]=i.first;
    }
    if(num==0)
    {
        cout << "Bing Mei You";
        return 0;
    }
    sort(ans, ans + num - 1);
    for (int i = 0; i < num;i++)
        cout << ans[i] << "\n";

        return 0;
}