#include <stdio.h>

int main(VOId)
{
	int i, j;
	int l[5];
	int temp;
	int f = 1;
	
	for (i = 0; i < 5; i++)
	{
		scanf("%d", &l[i]);
	}
	
	while (f)
	{
		for (i = 0; i < 4; i++)
		{
			f = 0;
			
			for (j = 0; j < 5; j++)
			{
				if (l[j] != j + 1)
				{
					f = 1;
					
					break;
				}
			}
			
			if (l[i] <= l[i + 1])
			{
				continue;
			}
			
			temp = l[i];
			l[i] = l[i + 1];
			l[i + 1] = temp;
			
			for (j = 0; j < 5; j++)
			{
				printf("%d ", l[j]);
			}
			
			fputc('\n', stdout);
		}
	}
	
	return 0;
}