#include <stdio.h>

int main(void)
{
	int n;
	int s, c, a, r;
	int x = 0;
	
	scanf("%d", &n);
	
	while (n--)
	{
		scanf("%d %d %d %d", &s, &c, &a, &r);
		
		if (s >= 1000 || c >= 1600 || a >= 1500 || (r <= 30 && r != -1))
		{
			x++;
		}
	}
	
	printf("%d", x);
	
	return 0;
}