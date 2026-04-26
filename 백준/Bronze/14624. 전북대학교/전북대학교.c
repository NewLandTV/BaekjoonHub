#include <stdio.h>

int main(void)
{
	int i, j;
	int n;
	
	scanf("%d", &n);
	
	if (n % 2 == 0)
	{
		printf("I LOVE CBNU");
		
		return 0;
	}
	
	for (i = 0; i < n; i++)
	{
		fputc('*', stdout);
	}
	
	fputc('\n', stdout);
	
	for (i = 0; i <= n >> 1; i++)
	{
		for (j = i; j < n >> 1; j++)
		{
			fputc(' ', stdout);
		}
		
		fputc('*', stdout);
		
		if (i == 0)
		{
			fputc('\n', stdout);
			
			continue;
		}
		
		for (j = 0; j < i * 2 - 1; j++)
		{
			fputc(' ', stdout);
		}
		
		fputc('*', stdout);
		fputc('\n', stdout);
	}
	
	return 0;
}