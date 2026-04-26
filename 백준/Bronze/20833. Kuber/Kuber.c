#include <stdio.h>

int main(void)
{
	int i;
	int n;
	int result = 0;
	
	scanf("%d", &n);
	
	for (i = 1; i <= n; i++)
	{
		result += i * i * i;
	}
	
	printf("%d", result);
	
	return 0;
}