#include <stdio.h>

int main(void)
{
	int limit;
	int speed;
	int x;
	int f;
	
	scanf("%d", &limit);
	scanf("%d", &speed);
	
	if (limit >= speed)
	{
		printf("Congratulations, you are within the speed limit!");
		
		return 0;
	}
	
	x = speed - limit;
	
	if (x < 21)
	{
		f = 100;
	}
	else if (x < 31)
	{
		f = 270;
	}
	else
	{
		f = 500;
	}
	
	printf("You are speeding and your fine is $%d.", f);
	
	return 0;
}