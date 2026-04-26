#include <stdio.h>

int main(void)
{
	int a, b, t, i;
	
	scanf("%d", &t);
	
	for (i = 1; i < t + 1; i++)
	{
		scanf("%d %d", &a, &b);
		
		printf("Case #%d: %d + %d = %d\n", i, a, b, a + b);
	}
	
	return 0;
}