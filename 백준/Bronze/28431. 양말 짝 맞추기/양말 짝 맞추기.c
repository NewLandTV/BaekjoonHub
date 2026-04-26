#include <stdio.h>

int main(void)
{
    int a, b, c, d, e;
    
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    scanf("%d", &d);
    scanf("%d", &e);
    printf("%d", a ^ b ^ c ^ d ^ e);
    
    return 0;
}