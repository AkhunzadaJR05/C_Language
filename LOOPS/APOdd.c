
//AP 1,3,5,7,9.... TILL nth TERM

// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter a Number: ");
//     scanf("%d",&n);
//     for(int i = 1; i <=2*n-1;i=i+2){
//         printf("%d \n",i);
//     }
//     return 0;
// }

//AP 4,7,10,13.... TILL nth TERM

#include<stdio.h>
int main(){
    int n;
    printf("Enter a Number: ");
    scanf("%d",&n);
    for(int i = 4; i <=3*n+1;i=i+3){
        printf("%d \n",i);
    }
    return 0;
}