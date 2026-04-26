#include <stdio.h>

int main(void)
{
    int i;
    int n;
    int x;
    char s[14];
    int r;
    
    scanf("%d", &n);
    
    for (r = 0; n--;)
    {
        scanf("%d", &x);
        scanf(" %[^\n]", s);
        
        for (i = r = 0; i <= x; i++)
        {
            if (s[i * 4] == '!')
            {
                r = 10;
                
                break;
            }
            
            r += s[i * 4] - '0';
        }
        
        if (r < 10)
        {
            printf("%d\n", r);
            
            continue;
        }
        
        printf("!\n");
    }
    
    return 0;
}