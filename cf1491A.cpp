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
    int n, q;
    cin >> n >> q;
    vector<int> a(n);
    int num0=0,num1=0;
    for (auto &i : a)
    {
        cin >> i;
        if (i == 1)
            num1++;
        else
            num0++;
    }  
    for (int i = 0; i < q; i++)
    {
        int t;
        cin >> t;
        if (t == 1)
        {
            int x;
            cin >> x;
            if (a[x - 1] == 1)
            {
                a[x - 1] = 0;
                num1--;
                num0++;
            }
            else
            {
                a[x - 1] = 1;
                num0--;
                num1++;
            }
        }
        if (t == 2)
        {
            int k;
            cin >> k;
            if (k > num1)
                cout << "0\n";
            else
                cout<<"1\n";
        }
    }
    return 0;
}