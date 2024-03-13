#include<stdio.h>
int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    for(int i = 1; i <= n; i++)//-> Print No. Of Lines
    {
        for(int j=1; j<=i;j++)//-> Print No. Of Stars
        {
            printf(" *");
        }
        printf("\n");
    }
    return 0;
}