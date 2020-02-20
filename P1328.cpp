#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
    int n, na, nb,ansa=0,ansb=0;
    cin >> n >> na >> nb;
    int a[201], b[201];
    for (int i = 1; i <= na;i++)
        cin >> a[i];
    for (int i = 1; i <= nb;i++)
        cin >> b[i];

    int nowa=0,nowb=0;
    for (int i = 1; i <= n;i++)
    {
        nowa++;
        nowb++;
        if(nowa>na)nowa=1;
        if(nowb>nb)nowb=1;

        if(a[nowa]==0&&b[nowb]==1)ansb++;
        if(a[nowa]==0&&b[nowb]==2)ansa++;
        if(a[nowa]==0&&b[nowb]==3)ansa++;
        if(a[nowa]==0&&b[nowb]==4)ansb++;
        if(a[nowa]==1&&b[nowb]==0)ansa++;
        if(a[nowa]==1&&b[nowb]==2)ansb++;
        if(a[nowa]==1&&b[nowb]==3)ansa++;
        if(a[nowa]==1&&b[nowb]==4)ansb++;
        if(a[nowa]==2&&b[nowb]==0)ansb++;
        if(a[nowa]==2&&b[nowb]==1)ansa++;
        if(a[nowa]==2&&b[nowb]==3)ansb++;
        if(a[nowa]==2&&b[nowb]==4)ansa++;
        if(a[nowa]==3&&b[nowb]==0)ansb++;
        if(a[nowa]==3&&b[nowb]==1)ansb++;
        if(a[nowa]==3&&b[nowb]==2)ansa++;
        if(a[nowa]==3&&b[nowb]==4)ansa++;
        if(a[nowa]==4&&b[nowb]==0)ansa++;
        if(a[nowa]==4&&b[nowb]==1)ansa++;
        if(a[nowa]==4&&b[nowb]==2)ansb++;
        if(a[nowa]==4&&b[nowb]==3)ansb++;
    }
    cout << ansa << " " << ansb;
    system("pause");
}



    
