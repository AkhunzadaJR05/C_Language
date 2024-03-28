<<<<<<< HEAD
// #include<stdio.h>
// int main(){
// for(int i = 65;i<=90;i++){
//     printf("%d->",i);
//     char ch = (char)i;
//     printf("%c\n",ch);

// }
//     return 0;
// }

#include <stdio.h>
#include <math.h>
 
int main()
{
    int i, digit1, digit2, digit3, sum, num;
    printf("All Armstrong number between 1 and 1000 are:\n");
 
    // This loop will run for 1 to 1000
    for (i = 1; i <= 1000; i++)
    {
        num = i;
        // All single digit numbers are Armstrong number.
        if (num <= 9)
        {
            printf("%d ", num);
        }
        else
        {
            sum = pow(num % 10, 3) + pow((num % 100 - num % 10) / 10, 3) + pow((num % 1000 - num % 100) / 100, 3);
            if (sum == i)
            {
                printf("%d ", i);
            }
        }
    }
=======
// #include<stdio.h>
// int main(){
// for(int i = 65;i<=90;i++){
//     printf("%d->",i);
//     char ch = (char)i;
//     printf("%c\n",ch);

// }
//     return 0;
// }

#include <stdio.h>
#include <math.h>
 
int main()
{
    int i, digit1, digit2, digit3, sum, num;
    printf("All Armstrong number between 1 and 1000 are:\n");
 
    // This loop will run for 1 to 1000
    for (i = 1; i <= 1000; i++)
    {
        num = i;
        // All single digit numbers are Armstrong number.
        if (num <= 9)
        {
            printf("%d ", num);
        }
        else
        {
            sum = pow(num % 10, 3) + pow((num % 100 - num % 10) / 10, 3) + pow((num % 1000 - num % 100) / 100, 3);
            if (sum == i)
            {
                printf("%d ", i);
            }
        }
    }
>>>>>>> fecb2ea41d3e605faf120931b46116963a1cd8bf
}