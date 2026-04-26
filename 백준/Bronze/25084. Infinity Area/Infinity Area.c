#include <stdio.h>

#define PI 3.1415926535897932384626433832795028841971693993751

int main(void)
{
	int i;
	int t;
	long long r, a, b;
	double y;
	
	scanf("%d", &t);
	
	for (i = 1; i <= t; i++)
	{
		scanf("%lld %lld %lld", &r, &a, &b);
		
		y = r * r * PI;
		
		while (r > 0)
		{
			r *= a;
			y += r * r * PI;
			r /= b;
			y += r * r * PI;
		}
		
		printf("Case #%d: %lf\n", i, y);
	}
	
	return 0;
}