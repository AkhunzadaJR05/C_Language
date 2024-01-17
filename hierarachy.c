#include<stdio.h>
int main(){
  // int x = 2 * 3 / 4 + 4 / 4 + 8 - 2 + 5 / 8;
  // printf("%d", x);
  // return 0;
  int i=2, j=3, k, l;
  float a, b;
  k = i / j * j;
  l = j / i * i;
  a = i / j * j;
  b = j / i * i;
  printf("%d %d %f %f", k, l, a, b);
}