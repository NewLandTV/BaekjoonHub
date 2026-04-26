#include <stdio.h>

int main(void)
{
	int i;
	int n;
	
	scanf("%d", &n);
	
	for (i = 1; i <= n; i++)
	{
		printf("Hello World, Judge %d!\n", i);
	}
	
	return 0;
}