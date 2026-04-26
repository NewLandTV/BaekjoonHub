#include <stdio.h>

int main(void)
{
	int i;
	char code[11];
	int n;
	char s[11];
	int count = 0;
	
	scanf("%s", code);
	scanf("%d", &n);
	
	while (n--)
	{
		scanf("%s", s);
		
		for (i = 0; i < 5; i++)
		{
			if (s[i] != code[i])
			{
				break;
			}
		}
		
		if (i == 5)
		{
			count++;
		}
	}
	
	printf("%d", count);
	
	return 0;
}