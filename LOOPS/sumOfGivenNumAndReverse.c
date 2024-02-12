#include<stdio.h>
int main(){
    int n;
    printf("Enter a Number:");
    scanf("%d",&n);
    int reverse = 0;
    int ld=0;
    int sum= 0;
    int revSum=0;
    while (n!=0)                                   
    {
        ld=n%10;
        reverse = reverse*10;
        reverse = reverse + ld;
        ld=n%10;
        sum = sum+ld;
        n=n/10;
    }
    revSum= sum * 2;
    printf("The Reverse Num is: %d",reverse);
    printf("\nThe sum of Digits is: %d",sum);
    printf("\nThe sum of Reverse is: %d",revSum);
  
    

 return 0;   
}