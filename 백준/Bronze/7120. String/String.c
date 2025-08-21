#include <stdio.h>
#include <string.h>

int main(void)
{
	int i;
	char s[252];
	char result[251];
	int count = 0;
	
	scanf("%s", s);
	
	for (i = 1; i <= strlen(s); i++)
	{
		if (s[i - 1] != s[i])
		{
			result[count++] = s[i - 1];
		}
	}
	
	printf("%s", result);
	
	return 0;
}