#include <stdio.h>

int main(void)
{
	int n;
	int sum = 0;
	
	while (1)
	{
		scanf("%d", &n);
		
		if (n == -1)
		{
			break;
		}
		
		sum += n;
	}
	
	printf("%d", sum);
	
	return 0;
}