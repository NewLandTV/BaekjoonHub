#include <stdio.h>

int main(void)
{
	int n;
	char input[31];
	
	for (scanf("%d", &n), getchar(); n > 0; n--)
	{
		scanf("%[^\n]s", input);
		getchar();
		
		if (input[0] > 'Z')
		{
			input[0] -= 32;
		}
		
		printf("%s\n", input);
	}
	
	return 0;
}