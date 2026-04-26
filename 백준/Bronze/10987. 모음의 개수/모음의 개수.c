#include <stdio.h>

int main(void)
{
	int i;
	int count = 0;
	char word[101];
	
	scanf("%s", word);
	
	for (i = 0; word[i]; i++)
	{
		if (word[i] == 'a' || word[i] == 'e' || word[i] == 'i' || word[i] == 'o' || word[i] == 'u')
		{
			count++;
		}
	}
	
	printf("%d", count);
	
	return 0;
}