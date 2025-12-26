#include <stdio.h>

int main(void)
{
	int n;
	char s[101];
	int x = 0;
	
	scanf("%d", &n);
	scanf("%s", s);
	
	for (n--; n >= 0; n--)
	{
		if (s[n] == 'j' || s[n] == 'i')
		{
			x += 2;
		}
		else
		{
			x++;
		}
	}
	
	printf("%d", x);
	
	return 0;
}