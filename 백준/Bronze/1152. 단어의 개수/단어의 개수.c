#include <stdio.h>
#include <string.h>

int main(void)
{
	int count;
	char* t;
	char input[1000000];
	
	scanf("%[^\n]s", input);
	
	t = strtok(input, " ");
	
	if (strlen(input) == 1 && input[0] == ' ')
	{
		printf("0");
		
		return 0;
	}
	
	for (count = 1; t = strtok(0, " "); count++);
	
	printf("%d", count);
	
	return 0;
}