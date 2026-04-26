#include <stdio.h>
#include <string.h>

int main(void)
{
	char b[50];
	int n;
	int i;
	int result = 0;
	
	scanf("%s %d", b, &n);
	
	for (i = 0; i < strlen(b); i++)
	{
		if (b[i] >= 48 && b[i] <= 57)
		{
			result = result * n + (b[i] - 48);
			
			continue;
		}
		
		result = result * n + (b[i] - 55);
	}
	
	printf("%d", result);
	
	return 0;
}