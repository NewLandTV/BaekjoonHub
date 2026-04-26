#include <stdio.h>
#include <string.h>

int Check(char* n);

int main(void)
{
    int i;
    char n[10001];
    
    for (i = 1; ; i++)
    {
        scanf("%s", n);
        
        if (n[0] == '0')
        {
            break;
        }
        
        printf("%d. %s\n", i, Check(n) ? "VALID" : "NOT");
    }
    
    return 0;
}

int Check(char* n)
{
    int i;
    int len = strlen(n);
    
    if (n[0] != '1' || n[len - 1] != '2')
    {
        return 0;
    }
    
    for (i = 0; i < len - 1; i++)
    {
        switch (n[i])
        {
        case '1':
        case '3':
            if (n[i + 1] != '4' && n[i + 1] != '5')
            {
                return 0;
            }
            
            break;
        case '2':
            return 0;
        case '4':
        case '6':
            if (n[i + 1] != '2' && n[i + 1] != '3')
            {
                return 0;
            }
            
            break;
        case '5':
        case '7':
            if (n[i + 1] != '8')
            {
                return 0;
            }
            
            break;
        case '8':
            if (n[i + 1] != '6' && n[i + 1] != '7')
            {
                return 0;
            }
            
            break;
        }
    }
    
    return n[len - 2] == '4' || n[len - 2] == '6';
}