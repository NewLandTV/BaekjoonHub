#include <stdio.h>

int main(void)
{
	int n;
	int a;
	int max = 0;
	
	scanf("%d", &n);
	
	for (; n > 0; n--)
	{
		scanf("%d", &a);
		
		if (max < a)
		{
			max = a;
		}
	}
	
	printf("%d", max);
	
	return 0;
}