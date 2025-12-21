#include <stdio.h>
#include <string.h>

#define Max(a, b) ((a) > (b) ? (a) : (b))

int main(void)
{
	int i;
	char a[20], b[20];
	
	scanf("%s", a);
	scanf("%s", b);
	
	for (i = 0; i < strlen(a); i++)
	{
		printf("%c", Max(a[i], b[i]));
	}
	
	return 0;
}