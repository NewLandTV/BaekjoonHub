#include <stdio.h>

int main(void)
{
	int n;
	int h, w;
	int max = 0;
	
	scanf("%d", &n);
	
	while (n--)
	{
		scanf("%d %d", &h, &w);
		
		if (max < h * w)
		{
			max = h * w;
		}
	}
	
	printf("%d", max);
	
	return 0;
}