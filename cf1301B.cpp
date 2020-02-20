//#include <bits/stdc++.h>
#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <cmath>
#define fast_io()                \
    ios::sync_with_stdio(false); \
    std::cin.tie(0);
typedef long long ll;
typedef long double ld;
using namespace std;

int a[200001];

int main()
{
    int T;
    cin >> T;
    while(T--)
    {
        int n;
        cin >> n;
        int maxf1 = 0, minf1 = INT_MAX;
        int max = 0;
        for (int i = 0; i < n;i++)
            cin >> a[i];
        for (int i = 1; i < n;i++)
        {
            if(a[i-1]==-1&&a[i]!=-1)
            {
                if(a[i]>maxf1)
                    maxf1 = a[i];
                if(a[i]<minf1)
                    minf1 = a[i];
            }
            else if(a[i-1]!=-1&&a[i]==-1)
            {
                if(a[i-1]>maxf1)
                    maxf1 = a[i-1];
                if(a[i-1]<minf1)
                    minf1 = a[i-1];
            }
            if(a[i-1]!=-1&&a[i]!=-1)
            {
                if(abs(a[i-1]-a[i])>max)
                    max = abs(a[i - 1] - a[i]);
            }
        }
        int ans;
        int t;
        if(maxf1==-1||minf1==INT_MAX)
        {
            cout<< max << " 0" << endl;
            continue;
        }
        t = maxf1 - ((maxf1 + minf1) / 2);
        ans = std::max(max, t);
        //max是相邻数字最大差值，maxf1是最大与-1相邻数，minf1是最小与-1相邻数
        //需要输出的是最大差值 和 所有-1需要替换的数字
        cout << ans << " " << (maxf1 + minf1) / 2<<endl;
    }
    system("pause");
    return 0;
}