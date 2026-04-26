#include <stdio.h>
#include <string.h>

#define Max(a, b) (a > b ? a : b)

int main(void)
{
	int i;
	char a[101], op, b[101];
	int max;
	
	scanf("%s", a);
	scanf(" %c", &op);
	scanf("%s", b);
	
	if (op == '*')
	{
		fputc('1', stdout);
		
		for (i = 0; i < strlen(a) + strlen(b) - 2; i++)
		{
			fputc('0', stdout);
		}
		
		return 0;
	}
	
	if (strlen(a) == strlen(b))
	{
		fputc('2', stdout);
		
		for (i = 1; i < strlen(a); i++)
		{
			fputc('0', stdout);
		}
		
		return 0;
	}
	
	max = Max(strlen(a), strlen(b));
	
	for (i = 0; i < max; i++)
	{
		fputc((i == 0 || i == (max == strlen(a) ? strlen(a) - strlen(b) : strlen(b) - strlen(a))) + '0', stdout);
	}
	
	return 0;
}