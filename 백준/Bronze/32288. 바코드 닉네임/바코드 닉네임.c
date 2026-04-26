#include <stdio.h>

int main(void)
{
    int i;
    int n;
    char s[501];
    
    scanf("%d", &n);
    scanf("%s", s);
    
    for (i = 0; i < n; i++)
    {
        if (s[i] == 'I')
        {
            printf("i");
        }
        else
        {
            printf("L");
        }
    }
    
    return 0;
}