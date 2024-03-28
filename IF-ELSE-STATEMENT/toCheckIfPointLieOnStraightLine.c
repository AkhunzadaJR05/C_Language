<<<<<<< HEAD
#include<stdio.h>
int main(){
    double x1,y1,x2,y2,x3,y3;
    printf("Enter x1:");
    scanf("%if",&x1);
    printf("Enter y1:");
    scanf("%if",&y1);
    printf("Enter x2:");
    scanf("%if",&x2);
    printf("Enter y2:");
    scanf("%if",&y2);
    printf("Enter x3:");
    scanf("%if",&x3);
    printf("Enter y3:");
    scanf("%if",&y3);
    double m1 = (y2-y1)/(x2-x1);
    printf("%if \n",m1);
    double m2 = (y3-y2)/(x3-x2);
    printf("%if \n",m2);
    if(m1 == m2){
        printf("All Three Points Lie On The Same Line.");
    }else{
        ("Not Lie On Same Line.");
    }
=======
#include<stdio.h>
int main(){
    double x1,y1,x2,y2,x3,y3;
    printf("Enter x1:");
    scanf("%if",&x1);
    printf("Enter y1:");
    scanf("%if",&y1);
    printf("Enter x2:");
    scanf("%if",&x2);
    printf("Enter y2:");
    scanf("%if",&y2);
    printf("Enter x3:");
    scanf("%if",&x3);
    printf("Enter y3:");
    scanf("%if",&y3);
    double m1 = (y2-y1)/(x2-x1);
    printf("%if \n",m1);
    double m2 = (y3-y2)/(x3-x2);
    printf("%if \n",m2);
    if(m1 == m2){
        printf("All Three Points Lie On The Same Line.");
    }else{
        ("Not Lie On Same Line.");
    }
>>>>>>> fecb2ea41d3e605faf120931b46116963a1cd8bf
}