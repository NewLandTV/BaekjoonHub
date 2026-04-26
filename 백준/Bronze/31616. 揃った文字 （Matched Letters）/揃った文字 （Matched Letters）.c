#include <stdio.h>

int main(void)
{
	int n;
	char s[101];
	
	scanf("%d", &n);
	scanf("%s", s);
	
	for (n--; n > 0; n--)
	{
		if (s[n] != s[n - 1])
		{
			printf("No");
			
			return 0;
		}
	}
	
	printf("Yes");
	
	return 0;
}