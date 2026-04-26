#include <stdio.h>

int main(void)
{
	int i;
	int n;
	int k;
	int sum = 0;
	
	scanf("%d", &n);
	scanf("%d", &k);
	
	for (i = 1; i < k; i++)
	{
		printf("%d\n", i);
		
		sum += i;
	}
	
	printf("%d", n - sum);
	
	return 0;
}