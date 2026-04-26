#include <stdio.h>

int main(void)
{
	int n;
	int base;
	int sum = 0;
	int count = 0;
	
	scanf("%d", &n);
	
	while (n--)
	{
		scanf("%d", &base);
		
		if (base >= 0)
		{
			sum += base;
			count++;
		}
	}
	
	printf("%.4f", (float)sum / count);
	
	return 0;
}