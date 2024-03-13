#include<stdio.h>
int main(){
    int n;
    printf("Enter Number of lines: ");
    scanf("%d",&n);
    int nsp = 1;
    int nst = n;
    for(int m = 1; m<= n*2+1;m++){
        printf("*");
    }
    printf("\n");
    for(int i = 1; i <= n; i++){
      for(int k = 1; k<= nst;k++){
        printf("*");
      }
      for(int j = 1; j<=nsp;j++){
        printf(" ");
      }
      for(int k = 1; k<= nst;k++){
        printf("*");
      }     
      nst--;
      nsp+=2;
      
      printf("\n");
    }
    return 0;
    }