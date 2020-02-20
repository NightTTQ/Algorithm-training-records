#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>
#include <iomanip>
using namespace std;
struct d
{
    double j;
    double f;
    double c;
};
int cmp(d fr,d af)
{
    return fr.c < af.c;
}
int main()
{
    int m, n;
    while(cin>>m>>n)
    {
        if(m==-1&&n==-1)
            return 0;
        d room[1001];
        double ans = 0.0;
        for (int i = 0; i < n;i++)
        {
            cin >> room[i].j >> room[i].f;
            room[i].c = room[i].f / room[i].j;
        }
        sort(room, room + n,cmp);
        for (int i = 0; i < n;i++)
        {
            if(m>=room[i].f)
            {
                ans += room[i].j;
                m -= room[i].f;
            }
            else
            {
                ans += (m / room[i].f) * room[i].j;
                break;
            }
        }
        cout <<fixed<<setprecision(3)<< ans << endl;
    }
    system("pause");
    return 0;
}