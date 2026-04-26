#include <stdio.h>

#define Min(a, b) (a > b ? b : a)

int main(void)
{
    int c, d;
    int tel, cell, phone;
    int min;
    
    while (1)
    {
        scanf("%d %d", &c, &d);
        
        if (c == 0 && d == 0)
        {
            break;
        }
        
        tel = c * 30 + d * 40;
        cell = c * 35 + d * 30;
        phone = c * 40 + d * 20;
        min = Min(tel, cell);
        min = Min(min, phone);
        
        printf("%d\n", min);
    }
    
    return 0;
}