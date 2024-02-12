#include<stdio.h>
int main(){
  int x;
  printf("Enter 1st Num : \n");
  scanf("%d" ,&x);
  int y;
  printf("Enter 2nd Num : \n");
  scanf("%d" ,&y);
  int sum = x + y;
  printf("The Sum of two Nums is : %d" , sum);
  return 0;
}