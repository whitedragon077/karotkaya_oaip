#include<stdio.h>


int main()
{
    double a = 0, b = 0, i = 0;
    printf("Vvedite kol-vo rubley - ");
    scanf_s("%f", &a);
    printf("Vvedite kol-vo rubley, kotoroe xotite polychit - ");
    scanf_s("%f", &b);
    for (i = 0; a < b; ++i)
    {
        a += a * 0.04 / 12;
    }
    printf("%f mesyacev", i);
    return 0;
}