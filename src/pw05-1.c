#include <stdio.h>

int main(void)
{
    unsigned int option = (111260445 % 30) + 1; // 16

    float result = 0.0;

    for (float i = 0.0; i <= 5.0; i += 0.5)
    {
        result = 1 / (i * i + 1);
        printf("x = %.4f: y = %.4f\n", i, result);
    }

    return 0;
}