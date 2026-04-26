#include <stdio.h>
#include <string.h>

void CheckVPS(char* ps);

int main(void)   
{
    int i;
    int t;
    char ps[51];
    
    scanf("%d", &t);
    
    for (i = 0; i < t; i++)
    {
        scanf("%s", ps);
        CheckVPS(ps);
    }
    
    return 0;
}

void CheckVPS(char* ps)
{
    int i;
    int result = 0;
    
    for (i = 0; i < strlen(ps) && result >= 0; i++)
    {
        if (ps[i] == '(')
        {
           result++;
        }
        else if (ps[i] == ')')
        {
           result--;
        }
    }
    
    printf("%s\n", result == 0 ? "YES" : "NO");
}