#include <stdio.h>

int main(void)
{
	int n;
	char str[51];
	int count = 0;
	
	scanf("%d", &n);
	scanf("%s", str);
	
	for (; n >= 0; n--)
	{
		if (str[n] == 'a' || str[n] == 'i' || str[n] == 'u' || str[n] == 'e' || str[n] == 'o')
		{
			count++;
		}
	}
	
	printf("%d", count);
	
	return 0;
}