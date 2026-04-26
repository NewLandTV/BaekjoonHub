#include <stdio.h>

int main(void)
{
	int i;
	int n, f;
	int lastDigits;
	
	scanf("%d %d", &n, &f);
	
	lastDigits = n / 10 % 10 * 10 + n % 10;
	n -= lastDigits;
	
	for (i = 0; i < 100; i++)
	{
		if ((n + i) % f == 0)
		{
			printf("%02d", i);
			
			break;
		}
	}
	
	return 0;
}