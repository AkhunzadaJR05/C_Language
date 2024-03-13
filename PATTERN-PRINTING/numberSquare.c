#include<stdio.h>
int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    int m;
    printf("Enter a number Of Column: ");
    scanf("%d",&m);
    for(int i = 1; i <= n; i++)//-> Print No. Of Lines
    {
        for(int j=1; j<= n;j++)//-> Print No. Of Stars
        {
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}