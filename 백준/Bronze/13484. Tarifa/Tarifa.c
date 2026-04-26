#include <stdio.h>

int main(void)
{
	int i;
	int x;
	int n;
	int p;
	int mb = 0;
	
	scanf("%d", &x);
	scanf("%d", &n);
	
	for (i = 0; i < n; i++)
	{
		scanf("%d", &p);
		
		mb += x - p;
	}
	
	printf("%d", mb + x);
	
	return 0;
}