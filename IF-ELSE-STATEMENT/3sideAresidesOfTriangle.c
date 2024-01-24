#include <stdio.h>
int main()
{
    int a;
    int b;
    int c;
    printf("Enter a 1st Side :");
    scanf("%d", &a);
    printf("Enter a 2nd Side :");
    scanf("%d", &b);
    printf("Enter a 3rd Side :");
    scanf("%d", &c);
    if ((a + b) > c && (b + c) > a && (c + a) > b)
    {
        printf("Yes it Can Form a Triangle.");
    }
    else
    {
        printf("It Does not Form a Triangle.");
    }
    return 0;
}