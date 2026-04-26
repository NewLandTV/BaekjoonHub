#include <stdio.h>

int main(void)
{
	int i, index = 0;
	long long x, k, y = 0;
	
	scanf("%lld %lld", &x, &k);
	
	for (i = 0; i <= 64; i++)
	{
		if ((x >> i) & 1ll)
		{
			continue;
		}
		
		if ((k >> index) & 1ll)
		{
			y |= 1ll << i;
		}
		
		index++;
	}
	
	printf("%lld", y);
	
	return 0;
}