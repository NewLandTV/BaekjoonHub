#include <stdio.h>

#define Abs(x) ((x) > 0 ? (x) : -(x))

int main(void)
{
    int i;
    int n;
    char s[1001];
    int h = 0, v = 0;
    
    scanf("%d", &n);
    scanf("%s", s);
    
    for (i = 0; i < n; i++)
    {
        switch (s[i])
        {
            case 'N':
                v++;
                
                break;
            case 'S':
                v--;
                
                break;
            case 'W':
                h--;
                
                break;
            case 'E':
                h++;
                
                break;
        }
    }
    
    printf("%d", Abs(h) + Abs(v));
    
    return 0;
}