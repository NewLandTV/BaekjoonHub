#include <stdio.h>

int main(void)
{
	int i;
	char n[11];
	
	scanf("%s", n);
	
	for (i = 0; n[i]; i++)
	{
		if (n[i] != '0' + i + 1)
		{
			printf("-1");
			
			return 0;
		}
	}
	
	printf("%d", i);
	
	return 0;
}