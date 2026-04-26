#include <stdio.h>

int main(void)
{
	int i;
	int n;
	char x[9];
	
	scanf("%d", &n);
	
	for (; n > 0; n--)
	{
		scanf("%s", x);
		
		if (strlen(x) == 1)
		{
			printf("%s\n", x);
			
			continue;
		}
		
		for (i = strlen(x) - 1; i > 0; i--)
		{
			if (x[i] - '0' >= 5)
			{
				x[i - 1]++;
			}
		}
		
		x[0] - '0' > 9 ? printf("10") : fputc(x[0], stdout);
		
		for (i = 1; i < strlen(x); i++)
		{
			fputc('0', stdout);
		}
		
		fputc('\n', stdout);
	}
	
	return 0;
}