#include<stdio.h>
int main(){
  int year;
  printf("Enter the year :");
  scanf("%d",&year);
  if(year%4 == 0){
    printf("The Year is a Leap Year");
  }
  else{
    printf("it is not a leap year");
  }
}