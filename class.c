#include <stdio.h>
int d = 1;
int fun(int p)
{
    static int d = 5;
    d += 5;
    printf("%d\n", d);
    return d;
}
int main()
{
    int a = 3;
    printf("%d\n", fun(a + fun(d)));
    return 0;
}
