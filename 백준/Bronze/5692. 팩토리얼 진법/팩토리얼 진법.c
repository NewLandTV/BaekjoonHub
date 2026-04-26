#include <stdio.h>

int Factorial(int n);

int main(void)
{
	int i;
	char s[6];
	int len;
	int n;
	
	while (1)
	{
		scanf("%s", s);
		
		if (*s == '0')
		{
			break;
		}
		
		for (len = 0; s[len++];);
		
		for (i = len - 2, n = 0; i >= 0; i--)
		{
			n += (s[len - i - 2] - '0') * Factorial(i + 1);
		}
		
		printf("%d\n", n);
	}
	
	return 0;
}

int Factorial(int n)
{
	int i;
	int result = 1;
	
	for (i = 2; i <= n; i++)
	{
		result *= i;
	}
	
	return result;
}