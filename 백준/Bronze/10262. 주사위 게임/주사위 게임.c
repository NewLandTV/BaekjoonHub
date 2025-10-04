#include <stdio.h>

double GetAverage(int f, int e);

int main(void)
{
	int ga1, gb1, ga2, gb2;
	int ea1, eb1, ea2, eb2;
	double x1, x2, y1, y2;
	double gunnar, emma;
	
	scanf("%d %d %d %d", &ga1, &gb1, &ga2, &gb2);
	scanf("%d %d %d %d", &ea1, &eb1, &ea2, &eb2);
	
	x1 = GetAverage(ga1, gb1);
	x2 = GetAverage(ga2, gb2);
	y1 = GetAverage(ea1, eb1);
	y2 = GetAverage(ea2, eb2);
	
	gunnar = x1 + x2;
	emma = y1 + y2;
	
	if (gunnar > emma)
	{
		printf("Gunnar");
	}
	else if (gunnar < emma)
	{
		printf("Emma");
	}
	else
	{
		printf("Tie");
	}
	
	return 0;
}

double GetAverage(int f, int e)
{
	int i;
	double value;
	
	for (i = f; i <= e; i++)
	{
		value += i;
	}
	
	value /= (e - f + 1);
	
	return value;
}