#include<stdio.h>
int main(){
  float x;
  printf("Enter The number X :");
  scanf("%f",&x);
  int y = x ;
  printf("The Number Without Decimal is : %d \n" , y); 
  float z = x - y;
  printf("The fractional number is : %f", z);
  return 0;
}