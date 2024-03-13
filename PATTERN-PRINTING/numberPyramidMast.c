// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter Number of Lines: ");
//     scanf("%d",&n);
//     int nst = n;
//     int nsp = 1;   
//     for(int i = 1; i<= n*2+1;i++){
//         printf("%d",i);
//     }
//     printf("\n");
    
//     for(int i = 1; i <= n; i++){
//         int a = 1;
//       for(int k = 1; k<= nst;k++){
//         printf("%d",a);
//         a++;
//       }
//       for(int j = 1; j<=nsp;j++){
//         printf(" ");
//         a++;
//       }
//       for(int k = 1; k<= nst;k++){
//         printf("%d",k);
//         a++;
//       }     
//       nst--;
//       nsp+=2;
//         printf("\n");
//     }
// }


#include<stdio.h>
int main(){
    int n;
    printf("Enter Number of Lines: ");
    scanf("%d",&n);
    int nst = n;
    int nsp = 1;   
     int i, j;
    for (i = 1; i <= n; i++) {
        printf("%d", i);
    }
    for (j = n-1; j >= 1; j--) {
        printf("%d", j);
    }
    printf("\n");
    for(int i = 1; i <= n; i++){
     for(int k = 1; k<= (n-1)+1-i;k++){
        printf("%d",k);
      }
      for(int j = 1; j<=nsp;j++){
        printf(" ");
      }
      int a= n - 1;
      for(int k = (n-1)+1-i; k>= 1;k--){
        printf("%d",k);
        a--;
     }     
      nst--;
      nsp+=2;
        printf("\n");
    }
}

