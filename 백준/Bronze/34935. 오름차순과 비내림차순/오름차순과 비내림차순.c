#include <stdio.h>
#include <limits.h>

int main(void)
{
	int n;
	long long a, p = LLONG_MIN;
	
	scanf("%d", &n);
	
	while (n--)
	{
		scanf("%lld", &a);
		
		if (p >= a)
		{
			printf("0");
			
			return 0;
		}
		
		p = a;
	}
	
	printf("1");
	
	return 0;
}