#include <stdio.h> 
int main()
{

    float a = 0, b = 0 ;
    printf("Enter the amount of water in 1 and 2 vessels - \n");
    scanf_s("%f", &a);
    scanf_s("%f", &b);
    for (int i = 0; i < 12; i++)
    {
        a /= 2;
        b += a;
        b /= 2;
        a += b;
    }
    printf("%f amount of water in the 1 vessel\n", a);
    printf("%f amount of water in the 2 vessel", b);
    return 0;
}


