//DISPLAY AP 100,97,94....UPTO ALL TERM THAT ARE POSITIVE
// #include<stdio.h>
// int main(){
    // int n;
    // printf("Enter a Number: ");
    // scanf("%d",&n);

//     int a=100;
//     for(int i = 1; a>0 ;i++){
//         printf("%d \n",a);
//         a=a-3;
//     }
//     return 0;
// }


#include<stdio.h>
int main(){
   float a=100;
    for(int i = 1; a>0 ;i++){
        printf("%f \n",a);
        a=a/2;
    }
    return 0;
}