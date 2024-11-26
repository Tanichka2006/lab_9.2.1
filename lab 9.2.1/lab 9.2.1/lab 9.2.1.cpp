#include <stdio.h>
#include <math.h>
#pragma warning(disable : 4996)
#define Z 11
#define MAX(a, b) (((a) > (b)) ? (a) : (b))
#define MIN(a, b) (((a) < (b)) ? (a) : (b))
#define ABS(x) ((x) >= 0 ? (x) : -(x))
#define SQR(x) ((x) * (x))

int main() {
    double x, y, w;

    printf("Enter values for x and y:\n");
    scanf("%lf %lf", &x, &y);

#if Z > 10
    w = MAX(pow(x, 3), SQR(x + y));
#else
    w = MIN(ABS(x - Z), ABS(x + Z));
#endif

    printf("The value of w: %.2f\n", w);
    return 0;
}