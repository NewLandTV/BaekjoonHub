#include <stdio.h>

int main(void)
{
	int i;
	int n;
	char s[101];
	
	scanf("%d", &n);
	scanf("%s", s);
	
	for (i = 0; i < n; i++)
	{
		if (s[i] == 'J')
		{
			printf("O");
		}
		else if (s[i] == 'O')
		{
			printf("I");
		}
		else
		{
			printf("J");
		}
	}
	
	return 0;
}