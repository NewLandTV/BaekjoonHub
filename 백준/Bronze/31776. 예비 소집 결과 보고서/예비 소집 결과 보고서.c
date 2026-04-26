#include <stdio.h>

int main(void)
{
	int i;
	int n;
	int t[3];
	int c = 0;
	
	scanf("%d", &n);
	
	while (n--)
	{
		scanf("%d %d %d", &t[0], &t[1], &t[2]);
		
		if (t[0] + t[1] + t[2] == -3)
		{
			continue;
		}
		
		for (i = 0; i < 3; i++)
		{
			if (t[i] == -1)
			{
				t[i] = 121;
			}
		}
		
		if (t[0] <= t[1] && t[1] <= t[2])
		{
			c++;
		}
	}
	
	printf("%d", c);
	
	return 0;
}