#include <stdio.h>
#include <string.h>

int main(void)
{
	int i;
	char a[101];
	
	scanf("%s", a);
	
	for (i = 0; i < strlen(a); i++)
	{
		if (a[i] >= 'A' && a[i] <= 'Z')
		{
			printf("%c", a[i]);
		}
	}
	
	return 0;
}