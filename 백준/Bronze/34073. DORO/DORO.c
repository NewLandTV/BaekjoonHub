#include <stdio.h>

int main(void)
{
	int n;
	char word[101];
	
	scanf("%d", &n);
	
	while (n--)
	{
		scanf("%s", word);
		printf("%sDORO ", word);
	}
	
	return 0;
}