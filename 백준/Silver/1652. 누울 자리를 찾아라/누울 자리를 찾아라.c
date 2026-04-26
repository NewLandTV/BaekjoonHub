#include <stdio.h>

int main(void)
{
	int i, j;
	int n;
	char room[100][101];
	int stack, w = 0, l = 0;
	
	scanf("%d", &n);
	
	for (i = 0; i < n; i++)
	{
		scanf("%s", room[i]);
	}
	
	for (i = 0; i < n; i++)
	{
		for (stack = 0, j = -i; i + j < n; j++)
		{
			if (room[i + j][i] == 'X')
			{
				if (stack >= 2)
				{
					l++;
				}
				
				stack = 0;
			}
			
			if (room[i + j][i] == '.')
			{
				stack++;
			}
		}
		
		if (stack >= 2)
		{
			l++;
		}
		
		for (stack = 0, j = -i; i + j < n; j++)
		{
			if (room[i][i + j] == 'X')
			{
				if (stack >= 2)
				{
					w++;
				}
				
				stack = 0;
			}
			
			if (room[i][i + j] == '.')
			{
				stack++;
			}
		}
		
		if (stack >= 2)
		{
			w++;
		}
	}
	
	printf("%d %d", w, l);
	
	return 0;
}