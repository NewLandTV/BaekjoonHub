#include <stdio.h>
#include <string.h>

int main(void)
{
	int i;
	int n;
	char result[51];
	char str[51];
	
	scanf("%d", &n);
	scanf("%s", result);
	
	for (; n > 1; n--)
	{
		scanf("%s", str);
		
		for (i = 0; i < strlen(str); i++)
		{
			if (result[i] != str[i])
			{
				result[i] = '?';
			}
		}
	}
	
	printf("%s", result);
	
	return 0;
}