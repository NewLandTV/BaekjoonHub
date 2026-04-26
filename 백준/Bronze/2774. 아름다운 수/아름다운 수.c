#include <stdio.h>
#include <string.h>

int main(void)
{
	int i;
	int t;
	char x[11];
	int c[10], result;
	
	scanf("%d", &t);
	
	while (t--)
	{
		scanf("%s", x);
		
		for (i = 0; i < 10; c[i++] = 0);
		for (i = 0; i < strlen(x); c[x[i++] - '0']++);
		for (i = result = 0; i < 10; i++)
		{
			if (c[i])
			{
				result++;
			}
		}
		
		printf("%d\n", result);
	}
	
	return 0;
}