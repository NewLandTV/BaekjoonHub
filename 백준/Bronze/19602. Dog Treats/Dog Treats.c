#include <stdio.h>

int main(void)
{
    int s;
    int m;
    int l;
    int x;
    
    scanf("%d", &s);
    scanf("%d", &m);
    scanf("%d", &l);
    
    x = s + m * 2 + l * 3;
    
    printf("%s", x >= 10 ? "happy" : "sad");
    
    return 0;
}