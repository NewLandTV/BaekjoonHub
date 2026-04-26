#include <stdio.h>

int main(void)
{
	int i, j, k;
	int t;
	int x, y;
	int a[5];
	int sum, yes;
	
	scanf("%d", &t);
	
	while (t--)
	{
		scanf("%d %d", &x, &y);
		
		for (i = sum = 0; i < 5; i++)
		{
			scanf("%d", &a[i]);
			
			sum += a[i];
		}
		
		if (sum >= x && sum <= y)
		{
			printf("YES\n");
			
			continue;
		}
		
		for (i = yes = 0; i < 5; i++)
		{
			if (a[i] >= x && a[i] <= y)
			{
				yes = 1;
				
				break;
			}
		}
		
		if (yes)
		{
			printf("YES\n");
			
			continue;
		}
		
		for (i = 0; i < 5; i++)
		{
			for (j = i + 1; j < 5; j++)
			{
				sum = a[i] + a[j];
				
				if (sum >= x && sum <= y)
				{
					yes = 1;
					
					break;
				}
			}
			
			if (yes)
			{
				break;
			}
		}
		
		if (yes)
		{
			printf("YES\n");
			
			continue;
		}
		
		for (i = 0; i < 5; i++)
		{
			for (j = i + 1; j < 5; j++)
			{
				for (k = j + 1; k < 5; k++)
				{
					sum = a[i] + a[j] + a[k];
					
					if (sum >= x && sum <= y)
					{
						yes = 1;
						
						break;
					}
				}
				
				if (yes)
				{
					break;
				}
			}
			
			if (yes)
			{
				break;
			}
		}
		
		if (yes)
		{
			printf("YES\n");
			
			continue;
		}
		
		for (i = sum = 0; i < 5; i++)
		{
			sum += a[i];
		}
		
		for (i = 0; i < 5; i++)
		{
			if (sum - a[i] >= x && sum - a[i] <= y)
			{
				yes = 1;
				
				break;
			}
		}
		
		printf("%s\n", yes ? "YES" : "NO");
	}
	
	return 0;
}