#include <stdio.h>

int main(void)
{
    int i, j;
    int n;
    int multiple[100] = { 0, };
    
    scanf("%d", &n);
    
    for (i = 1; i <= 9; i++)
    {
        for (j = 1; j <= 9; j++)
        {
            multiple[i * j - 1] = 1;
        }
    }
    
    printf("%d", multiple[n - 1]);
    
    return 0;
}