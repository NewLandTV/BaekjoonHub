#include <stdio.h>
#include <string.h>

int main(void)
{
	size_t i, j;
	size_t n;
	char s[80];
	size_t l;
	
	scanf("%zu\n", &n);
	
	for (i = 0; i < n; i++)
	{
		fgets(s, 80, stdin);
		
		l = strlen(s);
		s[--l] = 0;
		
		for (j = l - 1; j < l; j--)
		{
			printf("%c", s[j]);
		}
		
		printf("\n");
	}
	
	return 0;
}