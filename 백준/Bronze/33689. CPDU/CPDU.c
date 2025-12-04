#include <stdio.h>

int main(void)
{
	int n;
	char s[21];
	int count = 0;
	
	scanf("%d", &n);
	
	while (n--)
	{
		scanf("%s", s);
		
		if (s[0] == 'C')
		{
			count++;
		}
	}
	
	printf("%d", count);
	
	return 0;
}