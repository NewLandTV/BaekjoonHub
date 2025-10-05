#include <stdio.h>

int main(void)
{
	int t;
	int n;
	
	scanf("%d", &t);
	
	while (t--)
	{
		scanf("%d", &n);
		printf("%d\n", n <= 2 ? 1 : 3);
	}
	
	return 0;
}