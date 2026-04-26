#include <stdio.h>

int main(void)
{
	int i;
	int n;
	int a;
	int min = 1000000000;
	int index = 0;
	
	scanf("%d", &n);
	
	for (i = 0; i < n; i++)
	{
		scanf("%d", &a);
		
		if (min > a)
		{
			min = a;
			index = i;
		}
	}
	
	printf("%d", index);
	
	return 0;
}