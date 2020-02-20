#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
int main()
{
    int n, k, d, c1, c2;
    bool q[3005];
    while(cin >> n >> k)
    {
        c1 = 0;
        c2 = 0;
        memset(q,0,sizeof(q));
        for (int i = 1; i <= n;i++)
        {
            cin >> d;
            q[d] = 1;
        }
        for (int i = 2; i <= d-1;i++)
            if (q[i-1]==1&&q[i]==0&&q[i+1]==1)
                c1++;
            else if(q[i-1]==1&&q[i]==0&&q[i+1]==0)
                c2++;
        if(k>=c1+c2*2)
            cout << 12 * c1 + 20 * c2 <<endl;
        else if(k>c1)
            cout << 12 * c1 + (k - c1) / 2 * 20 + (k - c1) % 2 * 8 << endl;
        else if(k<=c1)
            cout << 12 * k<<endl;
        }
    return 0;
}