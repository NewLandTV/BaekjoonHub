#include <stdio.h>

int main(void)
{
	int a, b;
	int price;
	
	scanf("%d %d", &a, &b);
	scanf("%d", &price);
	
	if (price * 2 <= a + b)
	{
		printf("%d", a + b - price * 2);
		
		return 0;
	}
	
	printf("%d", a + b);
	
	return 0;
}