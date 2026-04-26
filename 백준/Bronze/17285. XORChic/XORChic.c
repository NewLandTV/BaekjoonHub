#include <stdio.h>
#include <string.h>

int main(void)
{
	int i;
	char t[101];
	int key = 22;
	
	scanf("%s", t);

	for (i = 0; i < strlen(t); i++)
	{
		t[i] ^= key;
	}
	
	printf("%s\n", t);
	
	return 0;
}