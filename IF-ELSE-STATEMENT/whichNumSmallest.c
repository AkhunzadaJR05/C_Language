#include <stdio.h>
int main()
{
    int ram;
    printf("Enter Age of ram :");
    scanf("%d", &ram);
    int Sham;
    printf("Enter Age of Sham :");
    scanf("%d", &Sham);
    int Ajay;
    printf("Enter Age of Ajay :");
    scanf("%d", &Ajay);
    if (ram < Sham && ram < Ajay)
    {
        printf("Ram is The Youngest.", ram);
    }
    if (Sham < ram && Sham < Ajay)
    {
        printf("Sham is The Youngest.", Sham);
    }
    if (Ajay < ram && Ajay < Sham)
    {
        printf("Ajay is The Youngest.", Ajay);
    }
}