 #include<stdio.h>
int main(){
 int n;
    printf("Enter a number Of Rows: ");
    scanf("%d",&n);
    for(int i = 1; i <= n; i++)//-> Print No. Of Lines
    {
        int a = 1;
        for(int j=1; j<= i;j++)//-> Print No. Of Stars
        {
            printf("%d",a);
            a = a + 2;
        }
        printf("\n");
    }
    return 0;
}