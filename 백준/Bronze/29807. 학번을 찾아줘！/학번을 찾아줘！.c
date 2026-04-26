#include <stdio.h>

int main(void)
{
	int i;
	int t;
	int x[5] = { 0, };
	int number = 0;
	
	scanf("%d", &t);
	
	for (i = 0; i < t; i++)
	{
		scanf("%d", &x[i]);
	}
	
	if (x[0] > x[2])
	{
		number += (x[0] - x[2]) * 508;
	}
	else
	{
		number += (x[2] - x[0]) * 108;
	}
	
	if (x[1] > x[3])
	{
		number += (x[1] - x[3]) * 212;
	}
	else
	{
		number += (x[3] - x[1]) * 305;
	}
	
	if (x[4] > 0)
	{
		number += x[4] * 707;
	}
	
	number *= 4763;
	
	printf("%d", number);
	
	return 0;
}