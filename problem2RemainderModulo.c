#include<stdio.h>
int main(){
  int Num1,Num2;
  printf("Enter Dividend :");
  scanf("%d",&Num1);
  printf("Enter Divisor :");
  scanf("%d",&Num2);
  int q = Num1/Num2;
  // int r = Num1 - (Num2 * q); //divisor * Quotient + dividend
  // printf("The remainder when %d is divided by %d is : %d", Num1, Num2, r);
  int r = Num1 % Num2;
  printf("The remainder when %d is divided by %d is : %d", Num1, Num2, r);
  return 0;
}