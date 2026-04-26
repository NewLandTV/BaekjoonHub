#include <stdio.h>

int main(void)
{
	int a, b, c;
    int price = 0;
    int max = 0;
    
    scanf("%d %d %d", &a, &b, &c);
 
    if (a == b && b == c && a == c)
    {
        price = 10000 + a * 1000;
    }
    else if (a == b || a == c)
    {
        price = 1000 + a * 100;
    }
    else if (b == c)
    {
        price = 1000 + b * 100;
    }
    else
	{
        if (a > b && a > c)
        {
            max = a;
        }
        else if (b > a && b > c)
        {
            max = b;
        }
        else if (c > a && c > b)
        {
            max = c;
        }
 
        price = max * 100;
    }
    
    printf("%d", price);
    
	return 0;
}