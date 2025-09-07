#include <stdio.h>

int main(void)
{
	int i;
	int n;
	int a[101];
	int x, y;
	int rel, abs = 0;
	
	scanf("%d", &n);
	
	for (i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	
	scanf("%d %d", &x, &y);
	
	rel = n * x * 0.01;
	
	for (i = 0; i < n; i++)
	{
		if (a[i] >= y)
		{
			abs++;
		}
	}
	
	printf("%d %d", rel, abs);
	
	return 0;
}