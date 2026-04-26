#include <stdio.h>

int main(void)
{
	int i;
	char s[101];
	int c[26] = { 0, };
	
	scanf("%s", s);
	
	for (i = 0; s[i] != NULL; c[s[i++] - 97]++);
	
	for (i = 0; i < 26; i++)
	{
		printf("%d ", c[i]);
	}
	
	return 0;
}