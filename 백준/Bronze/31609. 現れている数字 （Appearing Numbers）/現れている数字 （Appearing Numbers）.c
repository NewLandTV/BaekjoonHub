#include <stdio.h>

int main(void)
{
	int i;
	int n;
	int a;
	int number[10] = { 0, };
	
	scanf("%d", &n);
	
	for (i = 0; i < n; i++)
	{
		scanf("%d", &a);
		
		number[a] = 1;
	}
	
	for (i = 0; i < 10; i++)
	{
		if (number[i] != 0)
		{
			printf("%d\n", i);
		}
	}
	
	return 0;
}