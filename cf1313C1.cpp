//#include <bits/stdc++.h>
#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <cmath>
#include <iomanip>
#include <numeric>
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
    int n;
    cin >> n;
    int a[n],b[n];
    int ans[n][n];
    int max = -1;
    for (int i = 0; i < n;i++)
    {
        cin >> a[i];
        if(a[i]>max)
            max = a[i];
        
        b[i] = a[i];
    }
    int num = -1;
    for (int i = 0; i < n;i++)
        if(a[i]==max)
        {
            num++;
            b[num] = i;
        }
    for (int i = 0; i <= num;i++)
    {
        
    }
        if (n == 2)
        {
            cout << a[0] << " " << a[1];
            return 0;
        }
    if(n==1)
    {
        cout << a[0];
        return 0;
    }
    
    //cout << a[0] << " "; 
    for (int i = 1; i < n - 1; i++)
    {
        if(a[i-1]<=a[i]&&a[i]<=a[i+1])
        {
            //cout << a[i] << " ";
            continue;
        }
        else if(a[i-1]<=a[i]&&a[i]>=a[i+1])
        {
            //cout << a[i] << " ";
            continue;
        }
        else if(a[i-1]>=a[i]&&a[i]>=a[i+1])
        {
            //cout << a[i] << " ";
            continue;
        }
        else
        {
            a[i + 1] = a[i];
            //cout << a[i] << " ";
            continue;
        }
    }
    if(a[n-1]>a[n-2])
        a[n - 1] = a[n - 2];



    for (int i = n-1; i >= 1; i--)
    {
        if(a[i-1]<=a[i]&&a[i]<=a[i+1])
        {
            //cout << a[i] << " ";
            continue;
        }
        else if(a[i-1]<=a[i]&&a[i]>=a[i+1])
        {
            //cout << a[i] << " ";
            continue;
        }
        else if(a[i-1]>=a[i]&&a[i]>=a[i+1])
        {
            //cout << a[i] << " ";
            continue;
        }
        else
        {
            a[i + 1] = a[i];
            //cout << a[i] << " ";
            continue;
        }
    }
    if(a[n-1]>a[n-2])
        a[n - 1] = a[n - 2];

    long long suma, sumb;
    

    system("pause");
    return 0;
}