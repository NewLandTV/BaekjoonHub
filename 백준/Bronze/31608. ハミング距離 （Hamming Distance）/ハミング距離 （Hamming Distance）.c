#include <stdio.h>

int main(void)
{
	int i;
	int n;
	char s[101];
	char t[101];
	int result = 0;
	
	scanf("%d", &n);
	scanf("%s", s);
	scanf("%s", t);
	
	for (i = 0; i < n; i++)
	{
		if (s[i] != t[i])
		{
			result++;
		}
	}
	
	printf("%d", result);
	
	return 0;
}