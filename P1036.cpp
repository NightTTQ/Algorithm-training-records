#include <cstdio>
#include <iostream>
#include <cmath>
using namespace std;
bool isprime(int p);
int n, k, x[22];
int run(int left,int sum,int start)
{
    if(left==0)return isprime(sum);
    int ans=0;
    for(int i=start;i<=n-1;i++)
        ans+=run(left-1,sum+x[i],i+1);
    return ans;
}
bool isprime(int p)
{
    int s=sqrt(double(p));
    for(int i=2;i<=s;i++)
        if(p%i==0)return false;
    return true;
}
int main()
{
	cin >> n >> k;
	for (int i = 0; i < n;i++)
		cin>>x[i];
	cout << run(k, 0, 0);
	system("pause");
	return 0;
}