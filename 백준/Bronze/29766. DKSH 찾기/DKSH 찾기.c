#include <stdio.h>

int main(void)
{
	int i;
	char s[1001];
	int count = 0;
	
	scanf("%s", s);
	
	for (i = 0; s[i]; i++)
	{
		if (s[i] == 'D' && s[i + 1] == 'K' && s[i + 2] == 'S' && s[i + 3] == 'H')
		{
			i += 3;
			count++;
		}
	}
	
	printf("%d", count);
	
	return 0;
}