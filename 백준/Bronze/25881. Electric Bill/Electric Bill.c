#include <stdio.h>

int main(void)
{
	int i;
	int a, b;
	int n;
	int v;
	
	scanf("%d %d", &a, &b);
	scanf("%d", &n);
	
	for (i = 0; i < n; i++)
	{
		scanf("%d", &v);
		
		if (v > 1000)
		{
			printf("%d %d\n", v, a * 1000 + b * (v - 1000));
		}
		else
		{
			printf("%d %d\n", v, a * v);
		}
	}
	
	return 0;
}