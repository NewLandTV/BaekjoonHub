#include <stdio.h>

int main(void)
{
	int i;
	int n;
	int sum = 0;
	
	scanf("%d", &n);
	
	char numbers[n];
	
	scanf("%s", numbers);
	
	for (i = 0; i < n; i++)
	{
		sum += numbers[i] - '0';
	}
	
	printf("%d", sum);
	
	return 0;
}