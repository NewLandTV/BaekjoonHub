#include <stdio.h>

int main(void)
{
	int t;
	long long a, b;
	
	scanf("%d", &t);
	
	while (t--)
	{
		scanf("%lld %lld", &a, &b);
		printf("yes\n");
	}
	
	return 0;
}