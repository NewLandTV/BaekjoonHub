#include <stdio.h>

int main(void)
{
    int str, dex, inte, luk, n;
    int min;
    
    scanf("%d %d %d %d %d", &str, &dex, &inte, &luk, &n);
    
    for (min = 0; ; min++)
    {
        if (min + str + dex + inte + luk >= n * 4)
        {
            break;
        }
    }
    
    printf("%d", min);
    
    return 0;
}