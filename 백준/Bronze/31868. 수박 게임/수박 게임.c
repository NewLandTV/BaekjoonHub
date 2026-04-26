#include <stdio.h>

int main(void)
{
	int n, k;
	int count = 0;
	
	scanf("%d %d", &n, &k);
	
	while (--n)
	{
		k >>= 1;
	}
	
	printf("%d", k);
	
	return 0;
}