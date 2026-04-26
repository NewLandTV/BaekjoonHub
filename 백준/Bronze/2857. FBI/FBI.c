#include <stdio.h>

int main(void)
{
	int i, j;
	char input[11];
	int okay[5] = { 0, };
	int away = 1;
	
	for (i = 0; i < 5; i++)
	{
		scanf("%s", input);
		
		for (j = 0; input[j + 2] != NULL; j++)
		{
			if (input[j] == 'F' && input[j + 1] == 'B' && input[j + 2] == 'I')
			{
				away = 0;
				okay[i] = 1;
				
				break;
			}
		}
	}
	
	if (away == 1)
	{
		printf("HE GOT AWAY!");
		
		return 0;
	}
	
	for (i = 0; i < 5; i++)
	{
		if (okay[i] == 1)
		{
			printf("%d ", i + 1);
		}
	}
	
	return 0;
}