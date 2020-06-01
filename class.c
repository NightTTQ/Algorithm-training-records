#include <stdio.h>

int main()
{
    int n = 2, k = 0;
    while (k++ && n++ > 2)
        ;
    printf("% d % d\n", k, n);

    return 0;
}