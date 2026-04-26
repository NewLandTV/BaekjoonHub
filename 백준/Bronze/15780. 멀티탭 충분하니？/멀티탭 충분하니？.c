#include <stdio.h>

int main(void)
{
	int n, k;
	int a;
	
	scanf("%d %d", &n, &k);
	
	while (k--)
	{
		scanf("%d", &a);
		
		n -= a + 1 >> 1;
	}
	
	printf("%s", n <= 0 ? "YES" : "NO");
	
	return 0;
}