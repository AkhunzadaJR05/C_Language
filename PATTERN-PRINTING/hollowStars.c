#include<stdio.h>
int main(){
    // int n;
    // printf("Enter a number Of Rows: ");
    // scanf("%d",&n);
    for(int i = 1; i <= 6; i++)//-> Print No. Of Lines
    {
        for(int j=1; j<= 4;j++)//-> Print No. Of Stars
        {
            // int a = n /2 + 1;
            if(j == 1 || i == 6 )
            printf("* ");
            else if( i == 1)
                printf("* ");
                else if(j == 4)
                 printf("* ");
                 else printf(" ");
        }
        printf("\n");
    }
    return 0;
}