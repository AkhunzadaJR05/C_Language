// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter a number : ");
//     scanf("%d",&n);
//     int a = 1;
//     for(int i = 1; i <= n; i++)//-> Print No. Of Lines
//     {
//         for(int j=1; j<=i;j++)//-> Print No. Of Stars
//         {
//             printf("%d",a);
//             a++;
//         }
//         printf("\n");
        
//     }
//     return 0;
// }

#include<stdio.h>
int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    int a = 1;
    for(int i = 1; i <= n; i++)//-> Print No. Of Lines
    {
        for(int j=1; j<=i;j++)//-> Print No. Of Stars
        {
            printf("%d ",a);
            a = a +2;
        }
        printf("\n");
        
    }
    return 0;
}