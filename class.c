#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    int a, b, c, t;
    scanf("%d%d%d", &a, &b, &c);
    if(b>a)
    {
        t = a;
        a = b;
        b = t;
    }
    if(c>a)
    {
        t = a;
        a = c;
        c = t;
    }
    if(c>b)
    {
        t = b;
        b = c;
        c = t;
    }
    printf("%d %d %d", a, b, c);
    return 0;
}
