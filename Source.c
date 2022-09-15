#include<stdio.h>


int main()
{
    double a = 0, b = 0, i = 0;
    printf("Enter the amount of rubles - ");
    scanf_s("%f", &a);
    printf("Enter the amount of rubles you want to receive - ");
    scanf_s("%f", &b);
    for (i = 0; a < b; ++i)
    {
        a += a * 0.04 / 12;
    }
    printf("%f months", i);
    return 0;
}