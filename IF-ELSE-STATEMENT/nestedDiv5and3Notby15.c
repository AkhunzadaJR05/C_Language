#include <stdio.h>
int main()
// {
//     int a;
//     printf("Enter a Number :");
//     scanf("%d", &a);
//     if (a % 5 == 0 || a % 3 == 0)
//     {
//         if (a % 15 != 0)
//         {
//             printf("%d is divisible by 5 or 3 And NOT by 15.", a);
//         }else{
//             printf("%d is divisible by 15.", a);
//         }
//     }else{
//             printf("%d is NOT divisible by 5 and 3.", a);
//         }
// }

{
    int a;
    printf("Enter a Number :");
    scanf("%d", &a);
    if ((a % 5 == 0 || a % 3 == 0) && a % 5 != 0)
    {

        printf("%d is divisible by 5 or 3 And NOT by 15.", a);
    }
    else
    {
        printf("%d is not matching the required Conditions.", a);
    }
}