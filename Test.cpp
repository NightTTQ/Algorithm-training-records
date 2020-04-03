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
typedef long long ll;
typedef long double ld;
using namespace std;
int prime[10000];
int book[10000];
int main()
{
    fast_io();
    int cnt=1;
	int n=10001; //10000以内的素数表 
	for(int i=2;i<=n;i++)
	{
		if(book[i] == 0)  //是素数
		{
			prime[cnt++]=i;  //存储素数
			for(int j=i*i;j<=n;j=j+i) //遍历i*i-n
			{
				book[j]=1; //不是素数的数赋值为1	
			}		
		}
	}
	for(int i=1;prime[i];i++)
	{
		//printf("%d%s",prime[i],i%5==0?"\n":" "); //打印素数
        cout << prime[i] << ",";
    }
    return 0;
}