#include <stdio.h>

#define QUARTER 25
#define DIME 10
#define NICKEL 5
#define PENNY 1

int main(void)
{
	int t, c;
	int i;
	int quarter;
	int dime;
	int nickel;
	int penny;
	int sum;
	
	scanf("%d", &t);
	
	for (i = 0; i < t; i++)
	{
		quarter = 0;
		dime = 0;
		nickel = 0;
		penny = 0;
		sum = 0;
		
		scanf("%d", &c);
		
		while (sum < c)
		{
			if (sum + QUARTER <= c)
			{
				sum += QUARTER;
				quarter++;
			}
			else if (sum + DIME <= c)
			{
				sum += DIME;
				dime++;
			}
			else if (sum + NICKEL <= c)
			{
				sum += NICKEL;
				nickel++;
			}
			else
			{
				sum += PENNY;
				penny++;
			}
		}
		
		printf("%d %d %d %d\n", quarter, dime, nickel, penny);
	}
	
	return 0;
}