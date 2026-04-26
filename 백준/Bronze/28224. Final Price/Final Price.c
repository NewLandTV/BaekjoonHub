#include <stdio.h>

int main(void)
{
	int n;
	int price;
	int total = 0;
	
	scanf("%d", &n);
	
	while (n--)
	{
		scanf("%d", &price);
		
		total += price;
	}
	
	printf("%d", total);
	
	return 0;
}