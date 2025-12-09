#include <stdio.h>

int main(void)
{
	int n;
	int t, l;
	int min = 200;
	
	scanf("%d", &n);
	
	while (n--)
	{
		scanf("%d %d", &t, &l);
		
		if (min > t + l)
		{
			min = t + l;
		}
	}
	
	printf("%d", min);
	
	return 0;
}