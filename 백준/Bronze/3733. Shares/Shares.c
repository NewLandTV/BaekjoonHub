#include <stdio.h>

int main(void)
{
	int n, s;
	
	while (1)
	{
		if (scanf("%d %d", &n, &s) == EOF)
		{
			break;
		}
		
		printf("%d\n", s / (n + 1));
	}
	
	return 0;
}