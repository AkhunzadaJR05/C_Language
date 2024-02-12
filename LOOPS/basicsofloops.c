// #include <stdio.h>
// int main()
// {
//     for (int i = 0; i <= 10; i++)
//     {
//         printf("Ali hun bhai!\n");
//     }
// }

// #include <stdio.h>
// int main()
// {
//     int n;
//     printf("Enter a Number n: ");
//     scanf("%d", &n);
//     for (int a = 1; a <= n; a = a + 1)
//     {
//         printf("Hello World!\n");
//     }
//     return 0;
// }

#include <stdio.h>
int main()
{
    //SCOPE OF VARIABLES
    int a;
    for (int a = 1; a <= 10; a = a + 2)
    {
        printf("Hello World!\n");
    }
    printf("%d",a);
    return 0;
}