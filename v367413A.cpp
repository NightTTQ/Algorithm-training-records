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
ll cmp(ll a, ll b)
{
    return a < b ? a : b;
}

int main()
{
    fast_io();
    int n2 = 1, n3 = 1, n5 = 1, n7 = 1;
    ll num[5900] = {0, 1};
    for (int i = 2; i < 5843;i++)
    {
        num[i] = cmp(cmp(2 * num[n2], 3 * num[n3]), cmp(5 * num[n5], 7 * num[n7]));
        if(num[i]==2*num[n2])
            n2++;
        if(num[i]==3*num[n3])
            n3++;
        if(num[i]==5*num[n5])
            n5++;
        if(num[i]==7*num[n7])
            n7++;
    }
    int n;
    while(cin>>n)
    {
        if(n==0)
            break;
        if(n%100==11||n%100==12||n%100==13)
            printf("The %dth humble number is %lld.\n",n,num[n]);
        else if(n%10==1)
            printf("The %dst humble number is %lld.\n",n,num[n]);
        else if(n%10==2)
            printf("The %dnd humble number is %lld.\n",n,num[n]);
        else if(n%10==3)
            printf("The %drd humble number is %lld.\n",n,num[n]);
        else
            printf("The %dth humble number is %lld.\n",n,num[n]);   
    }
    

    return 0;
}