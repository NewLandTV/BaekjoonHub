#include <stdio.h>

int main(void)
{
	int n;
	int y = 2024, m = 0;
	
	scanf("%d", &n);
	
	m += n * 7;
	y += m / 12;
	m %= 12;
	
	printf("%d %d", y, m + 1);
	
	return 0;
}