#include <stdio.h>
#include <math.h>

int main() {
    float a, b, sredn_arifm, sredn_geometr, c;
    printf(("a and b\n"));
    scanf_s("%f %f", &a, &b);
    sredn_arifm = (a + b) / 2;
    if (a < 0) {
        a = a * (-1);
    }
    if (b < 0) {
        b = b * (-1);
    }
    c = a * b;
    sredn_geometr = sqrt(c);
    printf("sredn geometr = %1.3f, sredn arifm = %1.3f\n", sredn_geometr, sredn_arifm);
    return 0;
}
