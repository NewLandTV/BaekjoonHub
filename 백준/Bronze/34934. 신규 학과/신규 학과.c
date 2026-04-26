#include <stdio.h>

int main(void)
{
	int n;
	char s[16];
	int year;
	
	scanf("%d", &n);
	
	while (n--)
	{
		scanf("%s %d", s, &year);
		
		if (year == 2026)
		{
			printf("%s", s);
			
			return 0;
		}
	}
	
	return 0;
}