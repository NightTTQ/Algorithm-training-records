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
using namespace std;
int cmp(int b,int a)
{
    return b > a;
}
int main()
{
    int T;
    cin >> T;
    while(T--)
    {
        int a[3],ans=0;
        cin >> a[0] >> a[1] >> a[2];
        sort(a, a + 3, cmp);
        if(a[0]>=1)
        {
            ans++;
            a[0]--;
        }
        if(a[1]>=1)
        {
            ans++;
            a[1]--;
        }
        if(a[2]>=1)
        {
            ans++;
            a[2]--;
        }
        if(a[0]>=1&&a[1]>=1)
        {
            ans++;
            a[0]--;
            a[1]--;
        }
        if(a[0]>=1&&a[2]>=1)
        {
            ans++;
            a[0]--;
            a[2]--;
        }
        if(a[1]>=1&&a[2]>=1)
        {
            ans++;
            a[1]--;
            a[2]--;
        } 
        if(a[0]>=1&&a[1]>=1&&a[2]>=1)
        {
            ans++;
            a[0]--;
            a[1]--;
            a[2]--;
        }
        cout << ans << endl;
    }
    system("pause");
    return 0;
}