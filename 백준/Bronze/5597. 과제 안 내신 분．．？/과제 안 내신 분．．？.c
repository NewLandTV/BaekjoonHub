#include <stdio.h>

int main(void)
{
	int i;
	int n;
	int array[30] = { 0, };
	
	for (i = 0; i < 28; i++)
	{
		scanf("%d", &n);
		
		array[n - 1] = 1;
	}
	
	for (i = 0; i < 30; i++)
	{
		if (array[i] == 0)
		{
			printf("%d\n", i + 1);
		}
	}
	
	return 0;
}