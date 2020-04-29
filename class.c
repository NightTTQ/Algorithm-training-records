#include <math.h>
#include <stdio.h>
#include <stdlib.h>
float fp(float n, float x)
{
    if (n == 0)
        return 1;
    else if (n == 1)
        return n;
    else
        return ((2 * n - 1) * x * fp(n - 1, x) - (n - 1) * fp(n - 2, x)) / n;
}
int main()
{
    float x, y;
    scanf("%f%f", &x, &y);
    printf("%f", fp(x, y));
    return 0;
}