#include <stdio.h>

int main(void)
{
	int n;
	char s[100001];
	
	scanf("%d", &n);
	scanf("%s", s);
	
	for (n -= 2; n > 0; n--)
	{
		if (s[n + 1] == 'o' && s[n] == 'o' && s[n - 1] == 'o')
		{
			printf("Yes");
			
			return 0;
		}
	}
	
	printf("No");
	
	return 0;
}