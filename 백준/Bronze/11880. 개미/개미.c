#include <stdio.h>

#define Min(a, b) ((a) < (b) ? (a) : (b))

int main(void)
{
	int t;
	long long a, b, c;
	long long x, y, z;
	
	scanf("%d", &t);
	
	while (t--)
	{
		scanf("%lld %lld %lld", &a, &b, &c);
		
		x = a * a + (b + c) * (b + c);
		y = b * b + (a + c) * (a + c);
		z = c * c + (a + b) * (a + b);
		
		printf("%lld\n", Min(x, Min(y, z)));
	}
	
	return 0;
}