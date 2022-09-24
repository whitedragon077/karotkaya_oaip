#include <stdio.h>
#include <math.h>

int main()
{
	float R, B;
	printf("put a radius of circle\n");
	scanf_s("%f", &R);
	if (R <= 0) {
		printf("circle doesn't exist\n");
		return 0;
	}
	printf("put a side of square\n");
	scanf_s("%f", &B);
	if (B <= 0) {
		printf("square doesn't exist\n");
		return 0;
	}
	R = sqrt(R);
	if (B <= R) {
		printf("you can cut a square hole\n", B);
	}
	else
		printf("you can't cut a square hole\n");
	return 0;

}
