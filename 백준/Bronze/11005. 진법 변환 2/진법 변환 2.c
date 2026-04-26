#include <stdio.h>
#include <string.h>

int main(void)
{
	int n, b;
	char result[100] = { 0, };
	int i;
	
	scanf("%d %d", &n, &b);
	
	for (i = 0; n > 0; i++)
	{
		result[i] = (char)(n % b + (n % b < 10 ? 48 : 55));
		n /= b;
	}
	
	for (i = strlen(result) - 1; i >= 0; i--)
	{
		putchar(result[i]);
	}
	
	return 0;
}