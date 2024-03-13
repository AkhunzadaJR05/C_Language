#include<stdio.h>
int main(){
    int n;
    printf("Enter Number of Lines: ");
    scanf("%d",&n);
    int nst = n;
    int nsp = 1;   
    int alpha = 1;
    for(int i = 1; i<= n*2+1;i++){
        int d =  alpha + 64;
        char ch = (char)d;
        printf("%c",ch);
        alpha++;
    }
    printf("\n");
    
    for(int i = 1; i <= n; i++){
        int alphabet = 1;
      for(int k = 1; k<= nst;k++){
         int d =  alphabet + 64;
        char ch = (char)d;
        printf("%c",ch);
        alphabet++;
      }
      for(int j = 1; j<=nsp;j++){
        printf(" ");
        alphabet++;
      }
      for(int k = 1; k<= nst;k++){
         int d =  alphabet + 64;
        char ch = (char)d;
        printf("%c",ch);
        alphabet++;
      }     
      nst--;
      nsp+=2;
        printf("\n");
    }
}