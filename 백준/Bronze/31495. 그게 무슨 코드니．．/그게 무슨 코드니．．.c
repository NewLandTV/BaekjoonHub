#include <stdio.h>
#include <string.h>

int main(void)
{
    int i;
    char s[51];
    
    scanf("%[^\n]s", s);
    
    if (s[0] == '\"' && s[strlen(s) - 1] == '\"' && strlen(s) > 2)
    {
        for (i = 1; i < strlen(s) - 1; i++)
        {
            fputc(s[i], stdout);
        }
        
        return 0;
    }
    
    printf("CE");
    
    return 0;
}