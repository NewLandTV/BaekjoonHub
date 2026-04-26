#include <stdio.h>

int main(void)
{
	int i;
	char s[7][23];
	int number;
	int max = 0;
	int index;
	
	for (i = 0; i < 7; i++)
	{
		scanf("%s %d", s[i], &number);
		
		if (max < number)
		{
			max = number;
			index = i;
		}
	}
	
	printf("%s", s[index]);
	
	return 0;
}