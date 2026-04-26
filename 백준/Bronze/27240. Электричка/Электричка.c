#include <stdio.h>

int main(void)
{
	int n, a, b;
	int s, t;
	
	scanf("%d %d %d", &n, &a, &b);
	scanf("%d %d", &s, &t);
	
	if (s >= b && t <= a)
	{
		printf("Full");
		
		return 0;
	}
	
	if ((s <= a && t <= a) || (s >= b && t >= b))
	{
		printf("Outside");
	}
	else if ((s > a && t > a) && (s < b && t < b))
	{
		printf("City");
	}
	else
	{
		printf("Full");
	}
	
	return 0;
}