#include <math.h>
#include <stdio.h>
#include <stdlib.h>
float sum(int n, int m)
{
    float s = 0;
    for (int i = n; i <= m; i++)
        s += (float)1 / i;
    return s;
}

int main()
{
    int n, m, ans = 0;
    scanf("%d%d", &n, &m);
    printf("%f", sum(n, m));
    return 0;
}
