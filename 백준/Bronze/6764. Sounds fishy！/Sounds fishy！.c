#include <stdio.h>

int main(void)
{
	int a, b, c, d;
	
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);
	scanf("%d", &d);
	
	if (a == b && b == c && c == d)
	{
		printf("Fish At Constant Depth");
		
		return 0;
	}
	
	if (a < b && b < c && c < d)
	{
		printf("Fish Rising");
		
		return 0;
	}
	
	if (a > b && b > c && c > d)
	{
		printf("Fish Diving");
		
		return 0;
	}
	
	printf("No Fish");
	
	return 0;
}