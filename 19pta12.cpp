//#include <bits/stdc++.h>
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <string>
#include <iomanip>
#include <iostream>
#include <vector>
#include <stack>
#define fast_io()                \
    ios::sync_with_stdio(false); \
    std::cin.tie(0);
typedef long long ll;
typedef long double ld;
using namespace std;
int main()
{
    fast_io();
    int n, m, k;
    cin >> n >> m >> k;
    while(k--)
    {
        bool flag = true;
        int a[1001];
        for (int i = 0;i<n;i++)
            cin >> a[i];
        int now = 1;
        stack<int> box;
        for (int i = 0;i<n;i++)
        {
            
            while(box.size()&&box.top() == now)
            {
                box.pop();
                now++;
            } 

            if(a[i]==now)
            {
                now++;
                while(box.size()&&box.top() == now)
                {
                    box.pop();
                    now++;
                } 
                //continue;
            }
            else
            {
                box.push(a[i]);
                if(box.size()>m)
                {
                    flag= false;
                    break;
                }
            }
            /*
            if(box.size()==m&&a[i]!=now&&box.top() != now)
            {
                flag = false;
                break;
            }
            */
        }
        while(box.size()&&box.top() == now)
            {
                box.pop();
                now++;
            }
        if(box.size()||now<n)
            flag = false;
        if(flag)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}