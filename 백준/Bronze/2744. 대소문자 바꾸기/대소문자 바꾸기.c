#include <stdio.h>

int main(void)
{
	int i;
	char word[101];
	
	scanf("%s", word);
	
	for (i = 0; i < word[i]; i++)
	{
		printf("%c", word[i] + (word[i] <= 90 ? 32 : -32));
	}
	
	return 0;
}