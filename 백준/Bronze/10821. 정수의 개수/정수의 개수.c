#include <stdio.h>

int main(void)
{
	char s[101];
	char* ptr;
	int n;
	
	scanf("%s", s);
	
	ptr = strtok(s, ",");
	
	for (n = 0; ptr != NULL; n++)
	{
		ptr = strtok(NULL, ",");
	}
	
	printf("%d", n);
	
	return 0;
}