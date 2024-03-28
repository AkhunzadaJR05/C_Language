// #include<stdio.h>
// int factorial(int x){
//     int fact = 1;
//     for(int i = 1; i<=x; i++){
//         fact = fact *i;
//     }
//     return fact;
// }
// int combination(int n, int r){
//     int nCr = factorial(n)/(factorial(r)*factorial(n-r));
//     return nCr;
// }
// int main(){
//     int n;
//     printf("Enter n: ");
//     scanf("%d",&n);
//     int r;
//     printf("Enter r: ");
//     scanf("%d",&r);
//     for(int i = 0; i <= n; i++){
//         for(int k = 1; k<=n-i;k++){
//         printf(" ");
//       }
//         for(int j = 0; j <= i; j++){
//             int iCj = combination(i,j);
//             printf("%d ",iCj);
//         }
//         printf("\n");
//     }
 
    
//     return 0;
// }

//PASCAL TRIANGLE USING MATHEMATICAL FORMULA
#include<stdio.h>
int main(){
    int n;
    printf("Enter n: ");
    scanf("%d",&n);
    for(int i = 0; i <= n; i++){
        int first= 1;
        for(int j = 0; j<=i;j++){
        printf("%d ",first);
        first = first * (i-j)/(j+1);
      }
      printf("\n");
    }
        
    return 0;
}