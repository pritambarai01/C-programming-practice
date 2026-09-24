#include <stdio.h>

int main()
{
    int i = 2;

    while (i < 20)
    {
        int j = 2;

        while (j <= i)
        {
            if (i % j == 0)
            {
                if (j == i)
                {
                    printf("%d IS A PRIME NUMBER\n", i);
                }
                else
                {
                    printf("%d IS NOT PRIME\n", i);
                }

                break;
            }

            j++;
        }

        i++;
    }

    return 0;
}