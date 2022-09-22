#include<stdio.h>
int main()
{
    int month = 0;
    printf("enter the number of the month from 1-12 \n");
    scanf_s("%d", &month);
    if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
    { 
        printf("31");
        return 0;
    }
    if (month == 2) {
        printf("28");
        return 0;
    }

   
    if (month == 4 || month == 6 || month == 9 || month == 11) {
        printf("30");
        return 0;
    }

    else
        printf("there are only 12 monthes, type the number between 1-12\n");

    return 0;
}