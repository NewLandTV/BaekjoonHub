#include <stdio.h>

int main(void)
{
	int i, j;
	char s1[5];
	char s2[5];
	int c = 1;
	
	scanf("%s", s1);
	scanf("%s", s2);
	
	for (i = 0; i < 4; i++)
	{
		if (s1[i] != s2[i])
		{
			c <<= 1;
		}
	}
	
	printf("%d", c);
	
	return 0;
}