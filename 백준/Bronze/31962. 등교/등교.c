#include <stdio.h>

int main(void)
{
	int i;
	int n, x;
	int s, t;
	int max = -1;
	
	scanf("%d %d", &n, &x);
	
	for (i = 0; i < n; i++)
	{
		scanf("%d %d", &s, &t);
		
		if (s + t > x)
		{
			continue;
		}
		
		if (max < s)
		{
			max = s;
		}
	}
	
	printf("%d", max);
	
	return 0;
}