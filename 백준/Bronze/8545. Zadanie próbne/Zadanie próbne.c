#include <stdio.h>

int main(void)
{
	int i;
	char input[4];
	
	scanf("%s", input);
	
	for (i = 2; i >= 0; i--)
	{
		putchar(input[i]);
	}
	
	return 0;
}