#include <stdio.h>

int main(void)
{
	int i, j, k;
	int t;
	int size;
	
	scanf("%d", &t);
	
	for (i = 0; i < t; i++)
	{
		scanf("%d", &size);
		
		if (size == 1)
		{
			fputc('#', stdout);
			fputc('\n', stdout);
			fputc('\n', stdout);
			
			continue;
		}
		
		for (j = 0; j < size; j++)
		{
			fputc('#', stdout);
		}
		
		fputc('\n', stdout);
		
		for (j = 0; j < size - 2; j++)
		{
			for (k = 0; k < size; k++)
			{
				if (k == 0 || k == size - 1)
				{
					fputc('#', stdout);
					
					continue;
				}
				
				fputc('J', stdout);
			}
			
			fputc('\n', stdout);
		}
		
		for (j = 0; j < size; j++)
		{
			fputc('#', stdout);
		}
		
		fputc('\n', stdout);
		fputc('\n', stdout);
	}
	
	return 0;
}