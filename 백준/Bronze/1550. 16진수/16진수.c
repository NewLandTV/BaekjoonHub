#include <stdio.h>
#include <string.h>

int main(void)
{
	int i;
	char hex[7];
	int result = 0;
	
	scanf("%s", hex);
	
	for (i = 0; i < strlen(hex); i++)
	{
		if (hex[i] >= 'A')
		{
			result = result * 16 + hex[i] - 'A' + 10;
			
			continue;
		}
		
		result = result * 16 + hex[i] - '0';
	}
	
	printf("%d", result);
	
	return 0;
}