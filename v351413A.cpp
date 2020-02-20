#include <iostream>
#include <cstdio>
#include <algorithm>
#include <iomanip>
using namespace std;
int main()
{
    int C;
    cin>>C;
    while(C--)
    {
        int n,v,w;
        int d[101];
        cin>>n>>v>>w;
        for(int i=0;i<n;i++)
            cin>>d[i];
        sort(d, d+n);
        double ans=0.0;//浓度
        int V=0;//体积
        for(int i=0;i<n;i++)
        {
            if(ans*V+v*d[i]<=w*(V+v))
            {
                ans=(ans*V+v*d[i])/(V+v);
                V+=v;
            }
            else break;
        }
        printf("%d %.2lf\n",V,ans/100);
    }
    system("pause");
    return 0;
}