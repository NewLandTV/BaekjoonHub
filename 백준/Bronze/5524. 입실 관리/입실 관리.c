#include <stdio.h>

int main(void)
{
	int i;
	int n;
	char si[21];
	
	for (scanf("%d", &n); n > 0; n--)
	{
		scanf("%s", si);
		
		for (i = 0; si[i]; i++)
		{
			if (si[i] <= 90)
			{
				si[i] += 32;
			}
			
			putchar(si[i]);
		}
		
		putchar('\n');
	}
	
	return 0;
}