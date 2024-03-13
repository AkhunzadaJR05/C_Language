// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter a number : ");
//     scanf("%d",&n);
//     int a;
//     for(int i = 1; i <= n; i++)//-> Print No. Of Lines
//     { 
//         if(i%2!=0) a = 1;
//         else a = 0;
//         for(int j=1; j<=i;j++)//-> Print No. Of Stars
//         {
//             printf("%d ",a);
//             if(a == 0) a = 1;
//             else a = 0;
//         }
//         printf("\n");
        
//     }
//     return 0;
// }
//BY CLEVER METHOD
#include<stdio.h>
int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    for(int i = 1; i <= n; i++)//-> Print No. Of Lines
    {
        for(int j=1; j<=i;j++)//-> Print No. Of Stars
        {
            if ((i+j)%2 == 0) printf("1"); 
            else printf("0");
        }
        printf("\n");
        
    }
    return 0;
}