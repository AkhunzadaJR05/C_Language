#include<stdio.h>
int main(){
  int x;
  printf("Enter a Number :");
  scanf("%d",&x);
  if(x%2 == 0){
    printf("You entered an even Number!");
  }
  if(x%2 == 1){
    printf("You entered an odd Number");
  }
  
  return 0;
}