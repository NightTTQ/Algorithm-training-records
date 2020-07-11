#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int a, b, c, x, cnt = 0;
    srand((unsigned)time(NULL));
    for (int i = 0; i < 5; i++)
    {
        a = rand() % 10 + 1;
        b = rand() % 10 + 1;
        c = rand() % 3;
        switch (c)
        {
            case 0:
                printf("%d+%d=", a, b);
                scanf("%d", &x);
                if (x == a + b)
                    cnt++;
                break;
            case 1:
                printf("%d-%d=", a, b);
                scanf("%d", &x);
                if (x == a - b)
                    cnt++;
                break;
            case 2:
                printf("%d*%d=", a, b);
                scanf("%d", &x);
                if (x == a * b)
                    cnt++;
                break;
        }
    }
    if (cnt >= 4)
        printf("闯关成功");
    else
        printf("闯关不成功");

    return 0;
}
