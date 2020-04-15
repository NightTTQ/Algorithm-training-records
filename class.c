#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    float x, y, ans;
    char c;
    printf("Please input two numbers and a operator symbol with space separated:");
    scanf("%f%c%f", &x, &c, &y);
    switch (c)
    {
        case '+':
            ans = x + y;
            break;
        case '-':
            ans = x - y;
            break;
        case '*':
            ans = x * y;
            break;
        case '/':
            ans = x / y;
            break;
    }
    printf("%f%c%f=%f", x, c, y, ans);

}
