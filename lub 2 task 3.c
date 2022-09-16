#include <stdio.h> 
int main()
{
    int a=0, b = 0, c=0;
    printf("Enter numbers N and K - ");
    scanf_s("%d", &a);
    scanf_s("%d", &b);
    for (int i = 0; a >= b; i++)
    {
        a -= b;
        c += 1;
    }
    printf("Quotient of division = %d\n", c);
    printf("Remainder of division = %d", a);
    return 0;
}
