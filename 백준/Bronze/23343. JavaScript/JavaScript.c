#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
	int i;
	char x[11], y[11];
	int a, b;
	
	scanf("%s %s", x, y);
	
	for (i = 0; i < strlen(x); i++)
	{
		if (!isdigit(x[i]))
		{
			printf("NaN");
			
			return 0;
		}
	}
	
	for (i = 0; i < strlen(y); i++)
	{
		if (!isdigit(y[i]))
		{
			printf("NaN");
			
			return 0;
		}
	}
	
	a = atoi(x);
	b = atoi(y);
	printf("%d", a - b);
	
	return 0;
}