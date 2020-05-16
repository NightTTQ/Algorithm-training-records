#include <stdio.h>
int main()
{
    int a[7] = {1, 2, 4, 5, 6, 7};
    int n;
    scanf("%d", &n);
    for (int i = 0; i < 6; i++)
        if (a[i] > n)
        {
            for (int j = 6; j > i; j--)
                a[j] = a[j - 1];
            a[i] = n;
            break;
        }
    for (int i = 0; i < 7; i++)
        printf("%d ", a[i]);
    return 0;
}
