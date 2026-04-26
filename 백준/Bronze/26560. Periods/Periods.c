#include <stdio.h>

int main(void)
{
	int n;
	char s[100];
	
	scanf("%d", &n);
	
	for (; n > 0; n--)
	{
		scanf(" %[^\n]s", s);
		printf("%s%s\n", s, s[strlen(s) - 1] == '.' ? "" : ".");
	}
	
	return 0;
}