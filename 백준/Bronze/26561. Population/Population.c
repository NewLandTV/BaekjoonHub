#include <stdio.h>

int main(void)
{
	int n;
	int p, t;
	int d, b;
	
	scanf("%d", &n);
	
	while (n--)
	{
		scanf("%d %d", &p, &t);
		
		d = t / 7;
		b = t >> 2;
		
		printf("%d\n", p - d + b);
	}
	
	return 0;
}