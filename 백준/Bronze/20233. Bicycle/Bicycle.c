#include <stdio.h>

#define Max(a, b) ((a) > (b) ? (a) : (b))

int main(void)
{
	int a, x, b, y;
	int t;
	int m, n;
	
	scanf("%d", &a);
	scanf("%d", &x);
	scanf("%d", &b);
	scanf("%d", &y);
	scanf("%d", &t);
	
	m = a + (Max(t, 30) - 30) * x * 21;
	n = b + (Max(t, 45) - 45) * y * 21;
	
	printf("%d %d", m, n);
	
	return 0;
}