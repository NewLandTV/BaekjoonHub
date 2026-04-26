#include <stdio.h>

int main(void)
{
	int n;
	int a, b, c;
	
	scanf("%d", &n);
	
	while (n--)
	{
		scanf("%d %d %d", &a, &b, &c);
		
		if (a + b + c == 180)
		{
			printf("%d %d %d Seems OK\n", a, b, c);
		}
		else
		{
			printf("%d %d %d Check\n", a, b, c);
		}
	}
	
	return 0;
}