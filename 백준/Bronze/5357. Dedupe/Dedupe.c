#include <stdio.h>
#include <string.h>

int main(void)
{
	int i, j = 0;
	int n;
	char s[100];
	char result[100];
	
	for (scanf("%d", &n); n > 0; n--, j = 0)
	{
		memset(result, 0, 100);
		scanf("%s", s);
		
		result[0] = s[0];
		
		for (i = 1; i < strlen(s); i++)
		{
			if (s[i] != result[j])
			{
				result[++j] = s[i];
			}
		}
		
		printf("%s\n", result);
	}
	
	return 0;
}