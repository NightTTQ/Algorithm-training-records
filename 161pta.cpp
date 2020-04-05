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
    int A, B;
    int a = 0, b = 0;
    cin>>A >> B;
    int n;
    cin>>n;
    for (int i = 0; i < n;i++)
    {
        int as, ah, bs, bh;
        cin >>as >>ah >>bs >>bh;
        if((ah==as+bs)&&(bh==as+bs))
            continue;
        else if(ah==as+bs)
            a++;
        else if(bh==as+bs)
            b++;
        if(a>A)
        {
            cout << "A\n"
                 << b;
            break;
        }
        if(b>B)
        {
            cout << "B\n"
                 << a;
            break;
        }
    }

    return 0;
}