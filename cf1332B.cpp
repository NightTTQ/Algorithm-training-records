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
bool flag[10001];
bool is=false;
set<int> s;
void fj(int n,int num)
{
    for (int i = 2; i <= n;i++)
        while (n%i==0)
        {
            s.insert(i);
            n /= i;
            flag[num] = true;
            is=true;
        }
    
}
int main()
{
    fast_io();
    int T;
    cin >> T;
    while(T--)
    {
        int n, a[1001];
        cin>>n;
        for(int i = 0; i < n;i++)
        {
            cin>>a[i];
            fj(a[i],i);
        }
        if(is)
            cout << s.size() + 1 << "\n";
        else
            cout << s.size() << "\n";
        int now = 0, ff = 0;
        for (int i = 0; i < n;i++)
        {
            if(flag[i])
                if(ff)
                    cout << ff << " ";
                else
                {
                    now++;
                    ff = now;
                    cout << ff << " ";
                }
            else
            {
                now++;
                cout << now << " ";
            }
        }
        cout<<"\n";
    }
    return 0;
}