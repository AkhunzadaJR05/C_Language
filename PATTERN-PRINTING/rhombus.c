#include<stdio.h>
int main(){
    int n;
    printf("Enter a Number Of Lines: ");
    scanf("%d",&n);
    int m;
    printf("Enter a Number Of Rows: ");
    scanf("%d",&m);
    for(int i = 1; i<=n; i++){
        for(int j = 1; j<=n-i; j++){
            printf(" ");
        }
        for (int k = 1; k <=m; k++)
        {
            printf("*");
        }
        printf("\n");
    }
}