#include <stdio.h>

#define Max(a, b) (a > b ? a : b)
#define Min(a, b) (a < b ? a : b)

int main(void)
{
	int p, q;
	int a, b;
	
	scanf("%d %d", &p, &q);
	scanf("%d %d", &a, &b);
	printf("%d", a * Min(p, q) + b * Max(q - p, 0));
	
	return 0;
}