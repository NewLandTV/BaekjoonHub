#include <stdio.h>

int main(void)
{
	int i = 0;
	int m, n;
	char result[100];
	
	scanf("%d %d", &m, &n);
	
	while (m >= n)
	{
		result[i++] = m % n;
		m /= n;
	}
	
	result[i] = m;
	
	for (; i >= 0; i--)
	{
		fputc(result[i] + (result[i] < 10 ? 48 : 55), stdout);
	}
	
	return 0;
}