#include<stdio.h>
int main(){
    int n;
    printf("Enter a Number Of Lines: ");
    scanf("%d",&n);
    for(int i = 1; i<=n; i++){
        int a = 1;
        for(int j = 1; j<=n-i; j++){
            printf(" ");
        }
        for(int j=1; j<= i;j++)//-> Print No. Of Stars
        {
            int d = a + 64;
            char ch = (char)d; 
            printf("%c",ch);
            a++;
        }
        printf("\n");
    }
}