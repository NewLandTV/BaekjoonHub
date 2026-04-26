#include <stdio.h>

int main(void)
{
	int t = 91;
	int a, b, c;
	
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);
	printf("The 1-3-sum is %d", t + a + b * 3 + c);
	
	return 0;
}