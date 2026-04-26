#include <stdio.h>

int main(void)
{
	int i, j, l;
	int t;
	int k;
	long long x, f[78];
	int flag;
	
	scanf("%d", &t);
	
	for (f[0] = f[1] = 1, i = 2; i < 78; i++)
	{
		f[i] = f[i - 1] + f[i - 2];
	}
	
	while (t--)
	{
		scanf("%d %lld", &k, &x);
		
		flag = 0;
		
		if (k == 1)
		{
			for (i = 0; i < 78; i++)
			{
				if (f[i] == x)
				{
					printf("YES\n");
					
					flag = 1;
					
					break;
				}
			}
			
			if (!flag)
			{
				printf("NO\n");
			}
			
			continue;
		}
		else if (k == 2)
		{
			for (i = 0; i < 78; i++)
			{
				for (j = 0; j < 78; j++)
				{
					if (f[i] + f[j] == x)
					{
						printf("YES\n");
						
						flag = 1;
						
						break;
					}
				}
				
				if (flag)
				{
					break;
				}
			}
			
			if (!flag)
			{
				printf("NO\n");
			}
			
			continue;
		}
		
		for (i = 0; i < 78; i++)
		{
			for (j = 0; j < 78; j++)
			{
				for (l = 0; l < 78; l++)
				{
					if (f[i] + f[j] + f[l] == x)
					{
						printf("YES\n");
						
						flag = 1;
						
						break;
					}
				}
				
				if (flag)
				{
					break;
				}
			}
			
			if (flag)
			{
				break;
			}
		}
		
		if (flag)
		{
			continue;
		}
		
		printf("NO\n");
	}
	
	return 0;
}