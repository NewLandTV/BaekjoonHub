#include <stdio.h>

int main(void)
{
	int i;
	int n;
	char t[25];
	int p = 2;
	
	scanf("%d", &n);
	
	for (i = 0; i < n; i++)
	{
		scanf(" %c", &t[i]);
	}
	
	for (i = 1; i < n; i++)
	{
		if (t[i] != t[i - 1])
		{
			p++;
		}
	}
	
	printf("%d", p);
	
	return 0;
}