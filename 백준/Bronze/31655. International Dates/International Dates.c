#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
	char s[11];
	char* ptr;
	int a, b;
	
	scanf("%s", s);
	
	ptr = strtok(s, "/");
	a = atoi(ptr);
	ptr = strtok(NULL, "/");
	b = atoi(ptr);
	
	if (a <= 12 && b > 12)
	{
		printf("US");
	}
	else if (a > 12 && b <= 12)
	{
		printf("EU");
	}
	else
	{
		printf("either");
	}
	
	return 0;
}