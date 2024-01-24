#include<stdio.h>
int main(){
    int x,y;
    printf("Enter The Coordinate:");
    scanf("%d %d",&x,&y);
    if(x==0 && y==0){
        printf("The Point is Origin.");
    }else if(x == 0){
        printf("The Point Lie On Y-axis");
    }else if(y == 0){
        printf("The Point Lie On X-axis");
    }else{
        printf("The Point is Somewhere else");
    }
    return 0;
}