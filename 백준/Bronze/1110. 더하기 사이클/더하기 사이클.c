#include <stdio.h>

int main(void)
{
	int a, b, c, result, n;
	int d = -1;
	int count = 0;
    
    scanf("%d", &n);
    
    result = n;
    
    while(d != result)
	{
        a = n / 10;
        b = n % 10;
        c = (a+b) % 10;
        d = (b*10) + c;
        n = d;
        count++;
    }
    
    printf("%d", count);
	
	return 0;
}