#include <stdio.h>

int main(void)
{
	int s, a, b;
	int price = 250;
	
	scanf("%d", &s);
	scanf("%d", &a);
	scanf("%d", &b);
	
	while (s > a)
	{
		a += b;
		price += 100;
	}
	
	printf("%d", price);
	
	return 0;
}