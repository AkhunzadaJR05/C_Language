<<<<<<< HEAD
#include <stdio.h>
int main()
{
    int costPrice;
    printf("Enter Cost Price :");
    scanf("%d", &costPrice);
    int sellPrice;
    printf("Enter Selling Price :");
    scanf("%d", &sellPrice);
    if (sellPrice > costPrice)
    {
        printf("Profit hua hai.");
    }
    else if (costPrice > sellPrice)
    {
        printf("loss ha hai.");
    }
    else
    {
        printf("Neither profit Nor Loss.");
    }
=======
#include <stdio.h>
int main()
{
    int costPrice;
    printf("Enter Cost Price :");
    scanf("%d", &costPrice);
    int sellPrice;
    printf("Enter Selling Price :");
    scanf("%d", &sellPrice);
    if (sellPrice > costPrice)
    {
        printf("Profit hua hai.");
    }
    else if (costPrice > sellPrice)
    {
        printf("loss ha hai.");
    }
    else
    {
        printf("Neither profit Nor Loss.");
    }
>>>>>>> fecb2ea41d3e605faf120931b46116963a1cd8bf
}