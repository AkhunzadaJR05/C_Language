#include<stdio.h>
int add(int x,int y){
    return x+y;
}
int main(){
    int a;
    printf("Enter 1st Number: ");
    scanf("%d",&a);
    int b;
    printf("Enter 2nd Number: ");
    scanf("%d",&b);
    int sum;
    sum = add(a,b); 
    printf("The sum is: %d",sum);
    return 0;
}