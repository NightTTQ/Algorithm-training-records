#include<cstdio>
#include<cstring>
#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;
int main()
{
    int T,m,n,k,sum;
    cin>>T;
    for (int i = 1; i <= T;i++)
    {
        cin>>m>>n>>k;
        sum=m*n;
        if(n>=2&&m>=2)
        {
            if(k<=(n-2)*(m-2))
                sum=sum+5*k;
            else if(k<=m*n-4)
                sum=sum+(5*(n-2)*(m-2))+4*(k-(n-2)*(m-2));
            else if(k<=m*n)
                sum=sum+(5*(n-2)*(m-2))+4*(2*m+2*n-8)+3*(k-(m*n-4));
            else
                sum=sum+5*(n-2)*(m-2)+4*(2*m+2*n-8)+12;
        }
        else
        {
            if(m==1&&n==1)
            {
                if(k!=0)
                    sum++;
            }
            else
            {
                if(m==1) swap(m,n);
                if(k<=m-2)
                    sum+=3*k;
                else if(k<=m)
                    sum+=3*(m-2)+2*(k-m+2);
                else
                    sum=sum+3*(m-2)+4;
            }
        }
        cout<<sum<<endl;
    }
    system("pause");
    return 0;
}