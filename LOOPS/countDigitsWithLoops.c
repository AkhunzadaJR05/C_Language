#include<stdio.h>
int main(){
    int n;
    printf("Enter a Number:");
    scanf("%d",&n);
    int count = 1;
    while (n!=0)
    {
        n=n/10;
        count++;
    }
     printf("The Number Of Digits Are: %d",count);
    

 return 0;   
}