#include<stdio.h>
int main(){
    int n;
    printf("Enter Number of Lines: ");
    scanf("%d",&n);
    int nsp = n - 1;
    for(int i = 1; i <= n; i++){
        for(int q = 1; q <= nsp; q++){//spaces kai liye loop
           printf(" ");
        }
        nsp--;
        int alphabet = 1;
        for(int j = 1; j <= i; j++){//normal star number triangle
            int d = alphabet + 64;
            char ch = (char)d;
            printf("%c",ch);
            alphabet++;
           }
        int a = i - 1;
        for(int k = 1; k <= i - 1; k++ ){//extra cheez
            int d = alphabet + 64;
            char ch = (char)d;
            printf("%c",ch);
            alphabet--;
            a--;
        }
        
        printf("\n");
    }
}






