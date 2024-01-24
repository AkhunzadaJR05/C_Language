#include<stdio.h>
int main(){
    int length;
    printf("Enter Length :");
    scanf("%d",&length);
    int breadth;
    printf("Enter Breadth :");
    scanf("%d",&breadth);
    int area;
    area = length * breadth;
    printf("Area of Rectangle is : %d\n", area);
    int perimeter;
    perimeter;
    perimeter =  2*(length + breadth);
    printf("Perimeter of Rectangle is : %d\n", perimeter);
    if(area>perimeter){
        printf("Area is greater Than Perimeter");
    }else{
        printf("Area is NOT greater Than Perimeter");
    }
}


//IF YOU WANT TO SWAP VALUES
// #include<stdio.h>
// int main(){
//     int num1 = 4; 
//     int num2 = 6;
//     int temp;
//     temp = num1;
//     num1 = num2;
//     num2 = temp;
//     printf("num1: %d\n", num1);
//     printf("num2: %d", num2);
//     return 0;
// }


