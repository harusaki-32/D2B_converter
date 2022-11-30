#include <stdio.h>

int main(void)
{
    int loop = 1;

    while (loop)
    {
        int value, separate;
        int highest = 1;
        int digit = 1;

        printf("10進数で入力しよう > ");
        scanf("%d", &value);

        while (highest <= value / 2)
        {
            highest *= 2;
            digit++;
        }

        separate = 4 - (digit % 4);

        if (separate < 4)  // zero-padding
        {
            for (int i = 0; i < separate; i++)
            {
                printf("0");
            }
        }

        for (int i = 0; i < digit; i++)
        {
            int left;

            left = value - highest;

            if (separate >= 4)
            {
                printf(" ");
                separate = 0;
            }

            if (left >= 0)
            {
                printf("%d", 1);
                value = left;
            }
            else
            {
                printf("%d", 0);
            }

            highest /= 2;
            separate++;
        }

        printf("\n\nもう一度？（はい：1 , いいえ：0）");
        scanf("%d", &loop);
    }

    return 0;
}