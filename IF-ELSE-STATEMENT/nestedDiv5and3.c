#include <stdio.h>
int main()
{
    int a;
    printf("Enter a Number :");
    scanf("%d", &a);
    if (a % 5 == 0)
    {
        if (a % 3 == 0)
        {
            printf("%d is divisible by 5 and 3", a); /* code */
        }else{
            printf("%d is NOT divisible by 5 and 3", a);
        }
    }else{
            printf("%d is NOT divisible by 5 and 3", a);
        }
}