#include <stdio.h>
int main()
{
    int a;
    printf("Enter a Number A :");
    scanf("%d", &a);
    int b;
    printf("Enter a Number B :");
    scanf("%d", &b);
    int c;
    printf("Enter a Number C :");
    scanf("%d", &c);
    if (a > b)
    {
        if (a > c)
            printf("%d is the Greatest", a);
        else
        {
            printf("%d is the Greatest", c);
        }
    }
    else
    {
        if (b > c)
        {
            printf("%d is the Greatest", b);
        }
        else
        {
            printf("%d is the Greatest", c);
        }
        // }
        // if (b > a && b > c)
        // {
        //     printf("%d is the Greatest",b);
        // }
        // if (c > a && c > b)
        // {
        //     printf("%d is the Greatest",c);
        // }
        return 0;
    }
}