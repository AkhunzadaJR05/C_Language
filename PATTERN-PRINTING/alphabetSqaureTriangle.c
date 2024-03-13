// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter a number : ");
//     scanf("%d",&n);
//     for(int i = 1; i <= n; i++)//-> Print No. Of Lines
//     {
//         int a = 1;
//         for(int j=1; j<= n;j++)//-> Print No. Of Stars
//         {
//             int d = a + 64;
//             char ch = (char)d; 
//             printf("%c ",ch);
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
    for(int i = 1; i <= n; i++)//-> Print No. Of Lines
    {
        int a = 1;
        for(int j=1; j<= i;j++)//-> Print No. Of Stars
        {
            int d = a + 64;
            char ch = (char)d; 
            printf("%c ",ch);
            a++;
        }
        
        printf("\n");
    }
    return 0;
}