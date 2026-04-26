#include <stdio.h>

int main(void)
{
	int i;
	int n;
	char s[101];
	
	scanf("%d", &n);
	scanf("%s", s);
	
	for (i = 0; i < n - 1; i++)
	{
		if (s[i + 1] == 'J')
		{
			printf("%c\n", s[i]);
		}
	}
	
	return 0;
}