#include <stdio.h>

int main(void)
{
	int i;
	char s[100001];
	int a = 0, b = 0;
	
	scanf("%s", s);
	
	for (i = 0; s[i]; i++)
	{
		if (s[i] == 'A')
		{
			a++;
		}
		else
		{
			b++;
		}
	}
	
	printf("%d : %d", a, b);
	
	return 0;
}