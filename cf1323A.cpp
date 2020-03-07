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
    int T;
    cin>>T;
    while (T--)
    {
        bool flag = false;
        int n;
        int a[201];
        int ans[201];
        int sum = 0, cnt = 0;
        ans[0] = -1;
        cin>>n;
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
            if(a[i]%2==0)
                ans[0] = i + 1;
        }
        if(ans[0]!=-1)
        {
            cout << 1 << "\n"
                 << ans[0] << "\n";
            flag = true;
            continue;
        }
        else 
            for (int i = 0; i < n; i++)
            {
                sum += a[i];
                ans[cnt] = i + 1;
                cnt++;
                if(sum%2==0)
                {
                    cout << cnt << "\n";
                    for (int j = 0; j < cnt;j++)
                        cout << ans[j] << " ";
                    cout << "\n";
                    flag = true;
                    break;
                }
            }
            if (!flag)
            {
                cout << "-1"
                     << "\n";
            }
            
        
    }
    return 0;
}