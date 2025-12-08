#include <stdio.h>

int main(void)
{
	int i;
	int n;
	char s[101];
	
	scanf("%d", &n);
	scanf("%s", s);
	
	for (i = 0; i < n; i++)
	{
		if (s[i] == s[i + 1])
		{
			printf("%c%c", s[i] - 32, s[i] - 32);
			
			i++;
			
			continue;
		}
		
		printf("%c", s[i]);
	}
	
	return 0;
}