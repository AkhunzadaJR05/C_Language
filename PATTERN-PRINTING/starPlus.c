#include<stdio.h>
int main(){
    int n;
    printf("Enter a number Of Rows: ");
    scanf("%d",&n);
    for(int i = 1; i <= n; i++)//-> Print No. Of Lines
    {
        for(int j=1; j<= n;j++)//-> Print No. Of Stars
        {
            int a = n /2 + 1;
            if(j == a || i == a )
            printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}