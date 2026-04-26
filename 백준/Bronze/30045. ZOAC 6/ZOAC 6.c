#include <stdio.h>

int main(void)
{
    int i;
    int n;
    char s[501];
    char* ptr;
    int count = 0;
    
    scanf("%d", &n);
    
    while (n--)
    {
        scanf("%s", s);
        
        for (i = 0; i < strlen(s) - 1; i++)
        {
            if ((s[i] == '0' && s[i + 1] == '1') || (s[i] == 'O' && s[i + 1] == 'I'))
            {
                count++;
                
                break;
            }
        }
    }
    
    printf("%d", count);
    
    return 0;
}