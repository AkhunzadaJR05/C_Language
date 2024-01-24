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
    int d;
    printf("Enter a Number D :");
    scanf("%d", &d);
    if (a > b && a > c && a > d)
    {
        printf("%d is the Greatest", a);
    }
    if (b > a && b > c && b > d)
    {
        printf("%d is the Greatest", b);
    }
    if (c > a && c > b && c > d)
    {
        printf("%d is the Greatest", c);
    }
    if (d > a && d > b && d > c)
    {
        printf("%d is the Greatest", d);
    }
}