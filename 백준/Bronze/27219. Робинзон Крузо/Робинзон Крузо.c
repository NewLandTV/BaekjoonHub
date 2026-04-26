#include <stdio.h>

int main(void)
{
	int n;
	
	for (scanf("%d", &n); n > 0;)
	{
		if (n >= 5)
		{
			n -= 5;
			
			putchar('V');
			
			continue;
		}
		
		putchar('I');
		
		n--;
	}
	
	return 0;
}