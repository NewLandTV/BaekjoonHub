#include <stdio.h>

int main(void)
{
	int n;
	int time;
	int y = 0, m = 0;
	
	scanf("%d", &n);
	
	while (n--)
	{
		scanf("%d", &time);
		
		y += (time / 30 + 1) * 10;
		m += (time / 60 + 1) * 15;
	}
	
	if (y == m)
	{
		printf("Y M %d", y);
		
		return 0;
	}
	
	if (y < m)
	{
		printf("Y %d", y);
	}
	else
	{
		printf("M %d", m);
	}
	
	return 0;
}