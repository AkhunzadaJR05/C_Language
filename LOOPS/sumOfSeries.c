
//SUM OF 1,2,3,4...

// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter a Number:");
//     scanf("%d",&n);
//     int sum = 0;
//     for(int i=0;i<=n;i++){
//         sum = sum + i;
       
//     }
    
//  printf("The sum is: %d",sum);
//  return 0;   
// }

//SUM OF 1,-2,3,-4,5,-6....

// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter a Number:");
//     scanf("%d",&n);
//     int sum = 0;
//     for(int i=0;i<=n;i++){
//         if(i%2 != 0 ) sum = sum + i;
//         else sum = sum - i;
//     }
//     printf("The sum Of Series is: %d",sum);
    
//  return 0;   
// }


// SUM OF 1,2,3,4...USING FORMULA

#include<stdio.h>
int main(){
    int n;
    int sum;
    printf("Enter a Number:");
    scanf("%d",&n);
    if(n%2==0){
      sum = -n/2;
    }else if(n%2!=0){
        sum = -n/2 + n;
    }
 printf("The sum is: %d",sum);
 return 0;   
}