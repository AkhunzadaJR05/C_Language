#include<stdio.h>
int main(){
    int n;
    printf("Enter a Number:");
    scanf("%d",&n);
    int reverse = 0;
    while (n!=0)                                   
    {
        
        int ld=n%10;
        reverse = reverse*10;
        reverse = reverse + ld;
        n=n/10;

       
    }
     printf("The Sum Of Digits Are: %d",reverse);
    

 return 0;   
}