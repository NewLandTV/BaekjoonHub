#include <stdio.h>

int main(void)
{
	int k, s;
	
	scanf("%d %d", &k, &s);	
	printf("%d", s / k + s % k);
	
	return 0;
}