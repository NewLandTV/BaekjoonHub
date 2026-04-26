#include <stdio.h>

int main(void)
{
	int i;
	char s[1000001];
	int b = 0, c = 0;
	int count = 0;
	
	scanf("%s", s);
	
	for (i = 0; s[i]; i++)
	{
		if (s[i] == 'B')
		{
			b++;
		}
		else if (s[i] == 'C')
		{
			c++;
		}
	}
	
	count = (b >> 1) + (c >> 1);
	
	printf("%d", count);
	
	return 0;
}