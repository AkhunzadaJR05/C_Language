#include<stdio.h>
int main(){
int a;
printf("Enter a Number :");
scanf("%d",&a);
if(a>99 && a<1000){
    printf("You Entered a Three Digit Positive Number.");
}else{
    printf("You have Entered a Wrong Number.");
}
}