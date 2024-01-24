#include<stdio.h>
int main(){
    int a;
    printf("Enter a Number :");
    scanf("%d",&a);
    if(a%5 == 0 || a%3 == 0){
        printf("You have Entered The Right Number. ");
    }else{
        printf("You have Entered The Wrong Number.");
    }
}