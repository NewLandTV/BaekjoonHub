#include <stdio.h>

int main(void)
{
	int i;
	int n;
	int w, h, f;
	
	scanf("%d", &n);
	
	while (n--)
	{
		scanf("%d %d %d", &w, &h, &f);
		printf("Data set: %d %d %d\n", w, h, f);
		
		for (i = 0; i < f; i++)
		{
			if (w > h)
			{
				w >>= 1;
			}
			else
			{
				h >>= 1;
			}
		}
		
		if (w > h)
		{
			printf("%d %d\n\n", w, h);
		}
		else
		{
			printf("%d %d\n\n", h, w);
		}
	}
	
	return 0;
}