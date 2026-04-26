#include <stdio.h>

int main(void)
{
	char s[1001];
	int i;
	
	scanf("%s", s);
	scanf("%d", &i);
	printf("%c", s[i - 1]);
	
	return 0;
}