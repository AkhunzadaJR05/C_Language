#include<stdio.h>
int main(){
  float m1 = 40; //physics
  float m2 = 35; //urdu
  float m3 = 33; //english
  float m4 = 36; //chem
  float m5 = 35; //bio
  float m6 = 36; //pakstd
  float maxmarks = 40;
  float percent = (m1/maxmarks + m2/maxmarks + m3/maxmarks + m4/maxmarks + m5/maxmarks + m6/maxmarks) *100 / 6;
  printf("Percentage of Marks is: %f", percent);
  return 0;
}