#include <stdio.h>

#define Abs(x) (x > 0 ? x : -x)

int main(void)
{
	int a, b, c, d;
	int m;
	
	scanf("%d %d %d %d", &a, &b, &c, &d);
	
	m = (a + d) - (b + c);
	
	printf("%d", Abs(m));
	
	return 0;
}