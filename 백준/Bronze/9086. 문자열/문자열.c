#include <stdio.h>
#include <string.h>

int main(void)
{
	int t;
	int i;
	char input[1001];
	
	scanf("%d", &t);
	
	for (i = 0; i < t; i++)
	{
		scanf("%s", input);
		printf("%c%c\n", input[0], input[strlen(input) - 1]);
	}
	
	return 0;
}