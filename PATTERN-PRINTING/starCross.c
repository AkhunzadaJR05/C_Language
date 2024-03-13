#include<stdio.h>
int main(){
    int n;
    printf("Enter a number Of Rows: ");
    scanf("%d",&n);
    
    for(int i = 1; i <= n; i++)//-> Print No. Of Lines
    {
        for(int j=1; j<= n;j++)
        if ( i == j || i + j == n + 1)//-> Print No. Of Stars
       printf("*");
       else printf(" ");
       printf("\n");
    }
    return 0;
}