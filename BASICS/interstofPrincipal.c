#include<stdio.h>
int main(){
  float pricipal,rate,time,si;
  printf("Enter the pricipal: ");
  scanf("%f",&pricipal);
   printf("Enter the rate : ");
  scanf("%f",&rate);
   printf("Enter the time : ");
  scanf("%f",&time);
  si = (pricipal * rate * time)/ 100;
  printf("Your Interest: %f",si);

  return 0;
}