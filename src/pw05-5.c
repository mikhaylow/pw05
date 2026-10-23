#include <stdio.h>

double calc(double a, double b);

int main(void)
{
    unsigned int option = ((111260445 + (0 + 22)) % 30) + 1; // 8

    double a, b, result;

    a = 0.0;
    b = 0.0;
    result = 0.0;

    while (scanf("%lf %lf", &a, &b) == 2)
    {
        result = calc(a, b);
        printf("%.4f\n", result);
    }
    

    return 0;
}

double calc(double a, double b)
{
    return ((a + b) * (a + b)) / ((a * a) + (b * b));
}