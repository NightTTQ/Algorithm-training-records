//#include <bits/stdc++.h>
#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <cmath>
#include <iomanip>
#define fast_io()                \
    ios::sync_with_stdio(false); \
    std::cin.tie(0);
typedef long long ll;
typedef long double ld;
using namespace std;

int main()
{
    fast_io();
    int n,b[200001],ans=0;
    int tmp = 0;
    cin >> n;
    for (int i = 1; i <= n;i++)
        cin >> b[i];
    if(n==1)
        ans = b[1];
    else
        for (int i = 1; i <= n;i++)
        {
            tmp += b[i];
            for (int j = i + 1; j <= n;j++)
                if((j-i)==(b[j]-b[i]))
                    tmp += b[j];
            if(tmp>ans)
                ans = tmp;
            tmp = 0;
        }
    cout << ans;
    system("pause");
    return 0;
}