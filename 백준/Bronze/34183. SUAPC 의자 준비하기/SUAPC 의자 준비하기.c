#include <stdio.h>

int main(void)
{
	int n, m, a, b;
	
	scanf("%d %d %d %d", &n, &m, &a, &b);
	
	if (n * 3 <= m)
	{
		printf("0");
		
		return 0;
	}
	
	printf("%d", (n * 3 - m) * a + b);
	
	return 0;
}