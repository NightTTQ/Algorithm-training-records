#include <stdio.h>
#include <string.h>

int pri[100000], vis[100000];

int primeFactor(int n)
{
    int cnt = 0;
    for (int i = 2; i <= n; i++)
    {
        if (!vis[i])
        {
            pri[cnt++] = i;
            vis[i] = 1;
        }
        for (int j = 0; j < cnt; j++)
        {
            if (pri[j] * i > n)
                break;
            vis[i * pri[j]] = 1;
            if (!(i % pri[j]))
                break;
        }
    }
    return cnt;
}

int main()
{
    int n;
    memset(vis, 0, sizeof(vis));
    memset(pri, 0, sizeof(pri));
    scanf("%d", &n);
    printf("%d\n", primeFactor(n));
    return 0;
}