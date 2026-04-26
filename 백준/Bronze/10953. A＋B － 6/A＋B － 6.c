#include <stdio.h>

int main(void)
{
	int t;
	char ab[4];
	
	for (scanf("%d", &t); t > 0; t--)
	{
		scanf("%s", ab);		
		printf("%d\n", ab[0] + ab[2] - 96);
	}
	
	return 0;
}