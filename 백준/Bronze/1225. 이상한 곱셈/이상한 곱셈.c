#include <stdio.h>
#include <string.h>

int main(void)
{
	int i, j;
	char a[10001], b[10001];
	long long result = 0;
	
	scanf("%s %s", a, b);
	
	if (*a == '0' || *b == '0')
	{
		printf("0");
		
		return 0;
	}
	
	for (i = 0; i < strlen(a); i++)
	{
		for (j = 0; j < strlen(b); j++)
		{
			result += (a[i] - '0') * (b[j] - '0');
		}
	}
	
	printf("%lld", result);
	
	return 0;
}