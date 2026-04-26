#include <stdio.h>

int main(void)
{
	char input;
	int count = 0;
	int result;
	
	while (1)
	{
		input = getchar();
		
		if (input == 'h')
		{
			break;
		}
		
		count++;
	}
	
	getchar();
	
	while (1)
	{
		input = getchar();
		
		if (input == 'h')
		{
			break;
		}
		
		count--;
	}
	
	printf("%s", count >= 0 ? "go" : "no");
	
	return 0;
}