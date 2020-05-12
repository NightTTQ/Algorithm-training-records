#include <stdio.h>
int main()
{
    char a[50], b[50], c[100];
    scanf("%s%s", &a, &b);
    for (int i = 0, aa = 0, bb = 0; i < 100; i++)
    {
        if (a[aa] != '\0')
        {
            c[i] = a[aa];
            aa++;
        }
        else if (b[bb] != '\0')
        {
            c[i] = b[bb];
            bb++;
        }
        else
            break;
    }
    printf("%s\n", c);
    return 0;
}
