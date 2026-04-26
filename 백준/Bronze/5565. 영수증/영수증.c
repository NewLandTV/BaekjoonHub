#include <stdio.h>

int main(void)
{
	int i;
	int total;
	int price;
	int sum = 0;
	
	scanf("%d", &total);
	
	for (i = 0; i < 9; i++)
	{
		scanf("%d", &price);
		
		sum += price;
	}
	
	printf("%d", total - sum);
	
	return 0;
}