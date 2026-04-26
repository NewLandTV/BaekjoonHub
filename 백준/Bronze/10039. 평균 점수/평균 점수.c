#include <stdio.h>

int main(void)
{
    int i;
    int s;
    int sum = 0;

    for (i = 0; i < 5; i++)
    {
        scanf("%d", &s);

        if (s < 40)
        {
            s = 40;
        }

        sum += s;
    }

    printf("%d", sum / 5);

    return 0;
}