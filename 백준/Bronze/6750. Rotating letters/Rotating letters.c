#include <stdio.h>

int main(void)
{
	int i;
	char s[31];
	
	scanf("%s", s);
	
	for (i = 0; s[i]; i++)
	{
		if (s[i] != 'I' && s[i] != 'O' && s[i] != 'S' && s[i] != 'H' && s[i] != 'Z' && s[i] != 'X' && s[i] != 'N')
		{
			printf("NO");
			
			return 0;
		}
	}
	
	printf("YES");
	
	return 0;
}