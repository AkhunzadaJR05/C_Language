//  #include<stdio.h>
// int main(){
//     int x = 4,y,z;
//     y =--x;
//     z =x--;
//     printf("\n %d%d%d",x,y,z);
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     int x=4,y=3,z;;
//     z= x-- -y;
//     printf("\n%d%d%d",x,y,z);
// }

// #include<stdio.h>
// int main(){
//     while('a'< 'b'){
//         printf("\nmalayalam is a Palindrome");
//     }
// }

// #include<stdio.h>
// int main(){
//     int i=10;
//     while (i=20)
//     {
//         printf("\nA computer bluff");
//     }
    
// }

// #include<stdio.h>
// int main(){
//     int i;
//     while(i=10)
//     {
//         printf("\n %d",i);
//         i=1+1;
//     }
    
// }

// #include<stdio.h>
// int main(){
//     int x=4,y=0,z;
//     while (x>=0)
//     {
//         x--;
//         y++;
//         if(x==y)
//             continue;
//         else
//             printf("\n%d %d",x,y);
//         break;
//     }
    
// }

#include<stdio.h>
int main(){
    int x=4,y=0,z;
    while (x>=0)
    {
        if(x==y)
            break;
        else
            printf("\n%d %d",x,y);
        x--;
        y++;
    }
    
}