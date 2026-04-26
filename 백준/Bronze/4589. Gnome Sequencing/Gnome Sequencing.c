#include <stdio.h>

int main(void)
{
	int n;
	int a, b, c;
	
	for (scanf("%d", &n), printf("Gnomes:\n"); n > 0; n--)
	{
		scanf("%d %d %d", &a, &b, &c);
		
		if (a < b && b < c || c < b && b < a)
		{
			printf("Ordered\n");
		}
		else
		{
			printf("Unordered\n");
		}
	}
	
	return 0;
}