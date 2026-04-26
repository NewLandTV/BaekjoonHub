#include <stdio.h>
#include <string.h>

int main(void)
{
	int i;
	int n, k;
	char words[100][16];
	int len = 0;
	
	scanf("%d %d", &n, &k);
	
	for (i = 0; i < n; i++)
	{
		scanf("%s", words[i]);
	}
	
	for (i = 0; i < n; i++)
	{
		len += strlen(words[i]);
		
		if (len > k)
		{
			len = strlen(words[i]);
			
			printf("\n%s", words[i]);
			
			continue;
		}
		
		if (i == 0)
		{
			printf("%s", words[i]);
		}
		else
		{
			printf(" %s", words[i]);
		}
	}
	
	return 0;
}