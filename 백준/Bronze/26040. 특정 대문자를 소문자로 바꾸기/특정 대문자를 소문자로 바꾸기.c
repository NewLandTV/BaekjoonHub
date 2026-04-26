#include <stdio.h>

int main(void)
{
	int i, j;
	char a[100001];
	char b[52];
	
	scanf("%s", a);
	scanf(" %[^\n]s", b);
	
	for (i = 0; a[i]; i++)
	{
		for (j = 0; b[j]; j++)
		{
			if (b[j] == ' ')
			{
				continue;
			}
			
			if (a[i] == b[j] && a[i] < 'a')
			{
				a[i] += ' ';
			}
		}
	}
	
	printf("%s", a);
	
	return 0;
}