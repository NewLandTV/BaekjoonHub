#include <stdio.h>

int main(void)
{
	char s[1000001];
	char p[1000001];
	
	scanf("%s", s);
	scanf("%s", p);
	printf("%d", strstr(s, p) ? 1 : 0);
	
	return 0;
}