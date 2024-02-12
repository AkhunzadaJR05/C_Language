#include<stdio.h>
int main(){
  float radius;
  printf("Enter The radius : ");
  scanf("%f",&radius);
  float pi = 3.145;
  float area = pi * radius * radius;
  printf("The area is : %f", area);
  return 0;
}