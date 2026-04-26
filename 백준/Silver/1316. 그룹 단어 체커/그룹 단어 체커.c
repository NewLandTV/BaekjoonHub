#include <stdio.h>
#include <string.h>

int Select(char input[]);

int main(void)
{
	int i;
	int wordCount;
	int sum = 0;
	char input[100];
	
	scanf("%d", &wordCount);
	
	for (i = 0; i < wordCount; i++)
	{
		scanf("%s", input);
		
		sum += Select(input);
	}
	
	printf("%d", sum);
	
	return 0;
}

int Select(char input[])
{
	int i;
	int j;
	int key = 0;
	int length = strlen(input);
	
	for (i = 0; i < length; i++)
	{
		for (j = 0; j < length; j++)
		{
			if (input[i] == input[j])
			{
				key = j - i;
				
				if (key > 1 && input[j - 1] != input[j])
				{
					return 0;
				}
			}
		}
	}
	
	return 1;
}