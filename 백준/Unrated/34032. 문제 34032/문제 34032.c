#include <stdio.h>

int main(void)
{
	int i;
	int n;
	char s[500001];
	int c = 0;
	
	scanf("%d", &n);
	scanf("%s", s);
	
	for (i = 0; i < n; i++)
	{
		if (s[i] == 'O')
		{
			c++;
		}
	}
	
	if (n & 1)
	{
		n++;
	}
	
	printf("%s", c >= n >> 1 ? "Yes" : "No");
	
	return 0;
}