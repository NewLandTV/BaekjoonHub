#include <stdio.h>

int main(void)
{
	int i;
	int gift[20000] = { 0, };
	int n;
	int k;
	
	scanf("%d", &n);
	
	for (i = 1; i <= n; i++)
	{
		scanf("%d", &k);
		
		gift[k - 1] = i;
	}
	
	for (i = 0; i < n; i++)
	{
		printf("%d\n", gift[i]);
	}
	
	return 0;
}