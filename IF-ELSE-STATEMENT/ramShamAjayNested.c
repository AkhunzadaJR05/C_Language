<<<<<<< HEAD
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
    if (ram < Sham)
    {
        if (ram < Ajay)
        {
            printf("Ram is The Youngest.", ram);
        }
        else
        {
            printf("Ajay is The Youngest.", ram);
        }
    }
    else
    {
        if (Sham < Ajay)
        {
            printf("Sham is the Youngest.", Sham);
        }
        else
        {
            printf("Ajay is the Yongest.", Ajay);
        }
    }
    return 0;
    // if (Sham < ram && Sham < Ajay)
    // {
    //     printf("Sham is The Youngest.", Sham);
    // }
    // if (Ajay < ram && Ajay < Sham)
    // {
    //     printf("Ajay is The Youngest.", Ajay);
    // }
=======
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
    if (ram < Sham)
    {
        if (ram < Ajay)
        {
            printf("Ram is The Youngest.", ram);
        }
        else
        {
            printf("Ajay is The Youngest.", ram);
        }
    }
    else
    {
        if (Sham < Ajay)
        {
            printf("Sham is the Youngest.", Sham);
        }
        else
        {
            printf("Ajay is the Yongest.", Ajay);
        }
    }
    return 0;
    // if (Sham < ram && Sham < Ajay)
    // {
    //     printf("Sham is The Youngest.", Sham);
    // }
    // if (Ajay < ram && Ajay < Sham)
    // {
    //     printf("Ajay is The Youngest.", Ajay);
    // }
>>>>>>> fecb2ea41d3e605faf120931b46116963a1cd8bf
}