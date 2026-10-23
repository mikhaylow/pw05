#include <stdio.h>

int main(void)
{
    unsigned int option = ((111260445 + (0 + 18)) % 30) + 1; // 4

    double nums[8];

    unsigned int nums_len = sizeof(nums) / sizeof(nums[0]);

    for (size_t i = 0; i < nums_len; i++)
    {
        nums[i] = i * i * i;
        printf("nums: %ld = %.2f\n", i, nums[i]);
    }

    double result;

    for (size_t i = 0; i < nums_len; i++)
    {
        result += nums[i];
    }

    double average = result / nums_len;

    printf("average: %.2f\n", average);

    return 0;
}