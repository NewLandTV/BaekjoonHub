#include <stdio.h>

int main(void)
{
	char c;
	
	while ((c = getchar()) != EOF)
	{
		fputc(c, stdout);
	}
	
	return 0;
}