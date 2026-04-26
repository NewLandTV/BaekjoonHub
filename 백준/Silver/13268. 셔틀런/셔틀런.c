#include <stdio.h>
#include <stdlib.h>

int distance;

void Check(int p);

int main(void)
{
	int i, j;
	
	scanf("%d", &distance);
	
	distance %= 100;
	
	for (i = 0; i <= 4; i++)
	{
		for (j = 1; j <= i; j++)
		{
			distance -= 5;
			
			Check(j);
		}
		
		distance++;
		
		for (j = i; j >= 1; j--)
		{
			distance -= 5;
			
			Check(j);
		}
		
		distance--;
		
		Check(0);
	}
	
	return 0;
}

void Check(int p)
{
	if (distance > 0)
	{
		return;
	}
	
	printf("%d", p);
	exit(0);
}