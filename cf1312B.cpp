//#include <bits/stdc++.h>
#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <cmath>
#include <vector>
#define fast_io()                \
    ios::sync_with_stdio(false); \
    std::cin.tie(0);
typedef long long ll;
typedef long double ld;
using namespace std;
int cmp(int f,int a)
{
    return f > a;
}
int main()
{
    fast_io();
    int T;
    cin >> T;
    while (T--)
    {
        int n, m, a[101];
        cin >> n;
        for (int i = 0; i < n;i++)
            cin >> a[i];
        sort(a, a + n, cmp);
        /*
        for (int i = 0; i < n-1;i++)
            if(((i+1)-a[i+1])==(i-a[i]))
                swap(a[i], a[i + 1]);
        */
        for (int i = 0; i < n;i++)
            cout << a[i] << " ";
        cout << "\n";
    }
    
    return 0;
}