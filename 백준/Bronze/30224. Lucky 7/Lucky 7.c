#include <stdio.h>

int ContainNumber(int number, int x);

int main(void)
{
	int number;
	int contain;
	
	scanf("%d", &number);
	
	contain = ContainNumber(number, 7);
	
	if (!contain)
	{
		printf("%d", number % 7 != 0 ? 0 : 1);
		
		return 0;
	}
	
	printf("%d", number % 7 != 0 ? 2 : 3);
	
	return 0;
}

int ContainNumber(int number, int x)
{
	while (number > 0)
	{
		if (number % 10 == x)
		{
			return 1;
		}
		
		number /= 10;
	}
	
	return 0;
}