// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter a Number: ");
//     scanf("%d",&n);
//     for(int i=1;i<=n-1;i++){
//      if(n%i==0) //i is a factor of n
//         printf("No its not a Prime Number.");
//      else
//         printf("Yes it is a Prime Number.");
//      break;
//     }
// }

//EFFICIENT WAY...
#include<stdio.h>
int main(){
    int n;
    printf("Enter a Number: ");
    scanf("%d",&n);
    int a;
    for(int i=1;i<=n-1;i++){
     if(n%i==0) //i is a factor of n
      a=1;
     break;
    }if(a==1){printf("1 is Neither Prime Nor Composite.");}
    if(a==0){
        printf("The Given Number is a Prime Number.");
    }else{
        printf("The Given Number is a Composite Number.");
    }
}