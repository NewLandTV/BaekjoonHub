#include <stdio.h>

int main(void)
{
	int input, i, j;
	int result = 0;
	int remain[10];
	
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &input);
		
		remain[i] = (input % 42);
	}
	
	for (i = 0; i < 10; i++)
	{
		int count = 0;
		
		for (j = i + 1; j < 10; j++)
		{
			if (remain[i] == remain[j])
			{
				count++;
			}
		}
		if (count == 0)
		{
			result++;
		}
	}
	
	printf("%d", result);
	
	return 0;
}