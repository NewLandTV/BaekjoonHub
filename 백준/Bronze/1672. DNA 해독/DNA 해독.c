#include <stdio.h>

int GetIndex(char c);

int main(void)
{
    int n;
    char s[1000001];
    int x, y;
    const char* t = "ACAGCGTAATCGGAGT";
    
    scanf("%d", &n);
    scanf("%s", s);
    
    for (n -= 2; n >= 0; n--)
    {
        x = GetIndex(s[n + 1]);
        y = GetIndex(s[n]);
        s[n + 1] = 0;
        s[n] = t[x + y * 4];
    }
    
    printf("%c", s[0]);
    
    return 0;
}

int GetIndex(char c)
{
    switch (c)
    {
    case 'A':
        return 0;
    case 'G':
        return 1;
    case 'C':
        return 2;
    case 'T':
        return 3;
    }
    
    return -1;
}