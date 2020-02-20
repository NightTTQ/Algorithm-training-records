#include <cstdio>
#include <iostream>
#include <cstring>
using namespace std;
int n, a, b, g, k, flag=0;
int log[10005][5];
int main()
{
    cin>>n;
    memset(log,-1,sizeof(log));
    for(int i=1;i<=n;i++)
    for(int j=1;j<=4;j++)
        cin>>log[i][j];

    int x, y;
    cin >> x >> y;
    for(int i=n;i>=1;i--)
    {
        if((log[i][1]<=x&&log[i][2]<=y)&&(log[i][1]+log[i][3]>=x&&log[i][2]+log[i][4]>=y)){cout<<i;flag=1;break;}
    }
    if(flag==0)cout<<"-1";
    return 0;
}
