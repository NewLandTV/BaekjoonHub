#include <stdio.h>

int main(void)
{
	int x, n;
	
	scanf("%d %d", &x, &n);
	
	if ((x > 0 && n == 0) || (x < 0 && n == 1))
	{
		printf("INFINITE");
		
		return 0;
	}
	if ((x <= 0 && !(n & 1)) || (x >= 0 && n == 1))
	{
		printf("0");
		
		return 0;
	}
	if (n & 1)
	{
		printf("ERROR");
		
		return 0;
	}
	
	n >>= 1;
	
	printf("%d", (x + n - 1) / n - 1);
	
	return 0;
}