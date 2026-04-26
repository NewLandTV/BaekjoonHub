#include <stdio.h>
#include <string.h>

int main(void)
{
	int i;
	int j;
	int max;
	int length;
	int result = 0;
	int select = 0;
	
	int count[26] = { 0, };
	
	char array[1000000];
	
	scanf("%s", array);
	
	length = strlen(array);
	
	for (i = 'a'; i <= 'z'; i++)
	{
		for (j = 0; j < length; j++)
		{
			if (i == array[j])
			{
				count[i - 'a']++;
			}
		}
	}
	
	for (i = 'A'; i <= 'Z'; i++)
	{
		for (j = 0; j < length; j++)
		{
			if (i == array[j])
			{
				count[i - 'A']++;
			}
		}
	}
	
	max = count[0];
	
	for (i = 1; i < 26; i++)
	{
		if (max < count[i])
		{
			max = count[i];
			select = i;
		}
	}
	
	for (i = 0; i < 26; i++)
	{
		if (max == count[i])
		{
			result++;
		}
	}
	
	if (result > 1)
	{
		printf("?");
	}
	else
	{
		printf("%c", select + 'A');
	}
	
	return 0;
}