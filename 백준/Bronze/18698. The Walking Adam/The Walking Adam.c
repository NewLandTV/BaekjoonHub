#include <stdio.h>
#include <string.h>

int main(void)
{
	int t;
	char s[101];
	int p;
	
	scanf("%d", &t);
	
	while (t--)
	{
		scanf("%s", s);
		
		for (p = 0; p < strlen(s) && s[p] != 'D'; p++);
		
		printf("%d\n", p);
	}
	
	return 0;
}