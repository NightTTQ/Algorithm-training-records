#include <stdio.h>

int fun(int a[], int n) {}

int main()
{
    int a[6], i;
    for (int i = 0; i < 6; i++)
        scanf("%d", &a[i]);
    fun(a, 6);
    for (int i = 0; i < 6; i++)
        printf("%d ", a[i]);
    return 0;
}