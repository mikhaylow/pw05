#include <stdio.h>

int main(void)
{
    unsigned int option = ((111260445 + (0 + 12)) % 30) + 1; // 28

    int n;
    double sum, first, result;

    n = 0;
    first = 0.0;
    result = 0.0;

    while (scanf("%d", &n) == 1 && n > 0)
    {
        sum = 0.0;

        for (int i = 1; i <= n; i++)
        {

            first = ((i + 1) % 2 == 0) ? 1 : -1;
            result = (first * i) / (i + 1);
            sum += result;
        }

        printf("%.6f\n", sum);
    }

    return 0;
}