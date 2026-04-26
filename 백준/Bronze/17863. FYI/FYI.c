#include <stdio.h>

int main(void)
{
    char n[8];
    
    scanf("%s", n);
    
    if (n[0] == '5' && n[0] == n[1] && n[0] == n[2])
    {
       printf("YES");
        
        return 0;
    }
    
    printf("NO");
    
    return 0;
}