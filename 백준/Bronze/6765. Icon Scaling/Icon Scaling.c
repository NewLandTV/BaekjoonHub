#include <stdio.h>

int main(void)
{
	int i, j;
	int n;
	char icon[3][3] = { "*x*", " xx", "* *" };
	
	scanf("%d", &n);
	
	for (i = 0; i < n * 3; i++)
	{
		for (j = 0; j < n * 3; j++)
		{
			fputc(icon[i / n][j / n], stdout);
		}
		
		fputc('\n', stdout);
	}
	
	return 0;
}