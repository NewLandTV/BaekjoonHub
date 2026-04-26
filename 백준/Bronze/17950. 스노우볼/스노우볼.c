#include <stdio.h>

int main(void)
{
	int i;
	int h, x;
	int c;
	long long multiple;
	long long sum = 0;
	
	scanf("%d %d", &h, &x);
	
	multiple = x;
	
	for (i = 0; i < h; i++)
	{
		scanf("%d", &c);
		
		sum += (long long)(c * multiple);
		sum %= 1000000007;
		multiple = (multiple * x) % 1000000007;
	}
	
	printf("%lld", sum);
	
	return 0;
}