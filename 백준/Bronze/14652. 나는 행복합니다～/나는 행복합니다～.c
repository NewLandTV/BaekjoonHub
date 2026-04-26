#include <stdio.h>

int main(void)
{
	int n, m, k;
	int x, y;
	
	scanf("%d %d %d", &n, &m, &k);
	
	x = k / m;
	y = k % m;
	
	printf("%d %d", x, y);
	
	return 0;
}