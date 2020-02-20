#include <cstdio>
#include <cstring>
#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <set>
#include <map>
#include <string>
#include <cmath>
#include <cstdlib>
using namespace std;

int na[21], nb[21];

int ans[2000001];
int numa[2000001], numb[2000001];
//char a[2000001], b[2000001];
string a, b;

int main()
{
    int T,out=0;
    cin >> T;
    while(T--)
    {
        cin >> a >> b;
        out++;
        int n = a.length();
        for (int i = 0; i < n;i++)
        {
            numa[i] = a[i] - '0';
            numb[i] = b[i] - '0';
        }
        if (n == 1)
        {
            printf("Case #%d: %d\n",out,(numa[0]+numb[0])%10);
            continue;
        }
        memset(na, 0, sizeof(na));
        memset(nb, 0, sizeof(nb));
        for (int i = 0; i < n;i++)
        {
            na[numa[i]]++;
            nb[numb[i]]++;
        }
        int f = 0, s = 0, large = -1;
        for (int i = 1; i <= 9;i++)
            for (int j = 1; j <= 9;j++)
            if(na[i]&&nb[j]&&((i+j)%10)>large)
            {
                f = i;
                s = j;
                large = (f + s) % 10;
            }
        na[f]--;
        nb[s]--;
        int cnt = 0;
        ans[cnt++] = (f + s) % 10;
        for (int t = 9; t >= 0;t--)
            for (int i = 0; i <= 9;i++)
            if(na[i])
            {
                if(i<=t)
                {
                    int j = t - i;
                    int k = min(na[i], nb[j]);
                    na[i] -= k;
                    nb[j] -= k;
                    while(k--)
                        ans[cnt++] = t;
                }
                int j = 10 + t - i;
                if(j>9)
                    continue;
                int k = min(na[i], nb[j]);
                na[i] -= k;
                nb[j] -= k;
                while(k--)
                    ans[cnt++] = t;
            }
        printf("Case #%d: ",out);
        int temp = 0;
        while(temp<cnt-1&&ans[temp]==0)
            temp++;
        for (int i = temp; i < cnt;i++)
            printf("%d",ans[i]);
        printf("\n");
    }
    system("pause");
    return 0;
}