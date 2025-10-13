#include <stdio.h>

int main(void)
{
	int i;
	int n;
	int a[10];
	int m;
	int b;
	int total = 0;
	
	scanf("%d", &n);
	
	for (i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	
	scanf("%d", &m);
	
	while (m--)
	{
		scanf("%d", &b);
		
		total += a[b - 1];
	}
	
	printf("%d", total);
	
	return 0;
}