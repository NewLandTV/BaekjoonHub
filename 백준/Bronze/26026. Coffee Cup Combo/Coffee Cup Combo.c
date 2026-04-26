#include <stdio.h>

int main(void)
{
	int i;
	int n;
	char s[100001];
	int count = 0;
	int max = 0;
	
	scanf("%d", &n);
	scanf("%s", s);
	
	for (i = 0; s[i]; i++)
	{
		if (s[i] == '1')
		{
			max++;
			count = 2;
		}
		else if (count > 0)
		{
			max++;
			count--;
		}
	}
	
	printf("%d", max);
	
	return 0;
}