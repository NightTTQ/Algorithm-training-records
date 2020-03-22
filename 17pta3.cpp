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
#define fast_io()                \
    ios::sync_with_stdio(false); \
    std::cin.tie(0);
#define mod 998244353
typedef long long ll;
typedef long double ld;

using namespace std;
int main()
{
    //fast_io();
    int n;
    
    int send[100001];
    char key;
    cin >> n;
    for (int i = 0; i < n;i++)
    {
        int num=0, h=0, m=0, t=0, cnt = 0;
        memset(send, -1, sizeof(send));
        while(scanf("%d %c %d:%d", &num, &key, &h, &m))
        {
            if(num==0)
                break;
            if(key=='S')
                send[num] = h * 60 + m;
            else if(key=='E')
                if(send[num]>=0)
                {
                    t = t+ h * 60 + m - send[num];
                    send[num] = -1;
                    cnt++;
                }
        }
        if(cnt==0)
            cout << "0 0\n";
        else
            cout << cnt << " " << (int)(t*1.0/cnt+0.5)<<"\n";
    }
        
    return 0;
}