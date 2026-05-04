#include <stdio.h>
#include <math.h>

int main() {
    double x;

    printf("Enter a number: ");
    scanf("%lf", &x);

    printf("\n--- Using value x = %.2lf ---\n", x);

    // Basic
    printf("sqrt(x) = %.2lf\n", sqrt(fabs(x)));        // safe
    printf("pow(x,2) = %.2lf\n", pow(x, 2));
    printf("fabs(x) = %.2lf\n", fabs(x));

    // Log & Exp
    if(x > 0) {
        printf("log(x) = %.2lf\n", log(x));
        printf("log10(x) = %.2lf\n", log10(x));
    } else {
        printf("log(x), log10(x) = undefined for x <= 0\n");
    }
    printf("exp(x) = %.2lf\n", exp(x));

    // Trigonometric (x in radians)
    printf("sin(x) = %.2lf\n", sin(x));
    printf("cos(x) = %.2lf\n", cos(x));
    printf("tan(x) = %.2lf\n", tan(x));

    // Inverse trig (input must be -1 to 1)
    double safe = x / (fabs(x) + 1);  // converts x into safe range (-1,1)
    printf("asin(safe) = %.2lf\n", asin(safe));
    printf("acos(safe) = %.2lf\n", acos(safe));
    printf("atan(x) = %.2lf\n", atan(x));

    // Rounding
    printf("ceil(x) = %.2lf\n", ceil(x));
    printf("floor(x) = %.2lf\n", floor(x));
    printf("round(x) = %.2lf\n", round(x));

    // Others
    printf("fmod(x,2) = %.2lf\n", fmod(x, 2));
    printf("hypot(x,2) = %.2lf\n", hypot(x, 2));

    return 0;
}