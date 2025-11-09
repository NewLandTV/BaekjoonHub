#include <stdio.h>

int main(void)
{
	int i, j;
	int n;
	char l[100][101];
	int k;
	
	scanf("%d", &n);
	
	for (i = 0; i < n; i++)
	{
		scanf("%s", l[i]);
	}
	
	scanf("%d", &k);
	
	switch (k)
	{
		case 1:
			for (i = 0; i < n; i++)
			{
				printf("%s\n", l[i]);
			}
			
			break;
		case 2:
			for (i = 0; i < n; i++)
			{
				for (j = n - 1; j >= 0; j--)
				{
					printf("%c", l[i][j]);
				}
				
				printf("\n");
			}
			
			break;
		case 3:
			while (n--)
			{
				printf("%s\n", l[n]);
			}
			
			break;
	}
	
	return 0;
}