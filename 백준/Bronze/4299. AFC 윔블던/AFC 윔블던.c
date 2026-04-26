#include <stdio.h>

int main(void)
{
	int sum, diff;
	int x, y;
	
	scanf("%d %d", &sum, &diff);
	
	x = sum + diff >> 1;
	y = sum - diff >> 1;
	
	if (sum < diff || x + y != sum || x - y != diff)
	{
		printf("-1");
		
		return 0;
	}
	
	printf("%d %d", x, y);
	
	return 0;
}