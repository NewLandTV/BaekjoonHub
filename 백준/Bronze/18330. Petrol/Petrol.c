#include <stdio.h>

#define Min(a, b) ((a) < (b) ? (a) : (b))

int main(void)
{
	int n;
	int k;
	int x;
	
	scanf("%d", &n);
	scanf("%d", &k);
	
	x = Min(n, k + 60);
	
	printf("%d", x * 1500 + (n - x) * 3000);
	
	return 0;
}