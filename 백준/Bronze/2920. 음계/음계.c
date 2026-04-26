#include <stdio.h>
#include <string.h>

int main(void)
{
	char input[16];
	
	scanf("%[^\n]s", input);
	
	if (!strcmp(input, "1 2 3 4 5 6 7 8"))
	{
		printf("ascending");
	}
	else if (!strcmp(input, "8 7 6 5 4 3 2 1"))
	{
		printf("descending");
	}
	else
	{
		printf("mixed");
	}
	
	return 0;
}