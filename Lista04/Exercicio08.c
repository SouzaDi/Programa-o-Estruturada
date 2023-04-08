#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int i, j, num;
    int nums[6];

    srand(time(NULL));

    for (i = 0; i < 6; i++)
    {
        num = (rand() % (60)) + 1;
        for (j = 0; j < i; j++)
        {
            if (nums[j] == num)
            {
                num = (rand() % (60)) + 1;
                j = -1;
            }
        }
        nums[i] = num;
    }

    for (i = 0; i < 6; i++)
    {
        for (j = i + 1; j < 6; j++)
        {
            if (nums[i] > nums[j])
            {
                int temp = nums[i];
                nums[i] = nums[j];
                nums[j] = temp;
            }
        }
    }

    for (i = 0; i < 6; i++)
    {
        printf("%d ", nums[i]);
    }

    printf("\n");

    return 0;
}