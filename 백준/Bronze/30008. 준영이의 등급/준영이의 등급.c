#include <stdio.h>

int main(void)
{
	int n, k;
	int g;
	int result;
	
	scanf("%d %d", &n, &k);
	
	while (k--)
	{
		scanf("%d", &g);
		
		result = g * 100 / n;
		
		if (result <= 4)
		{
			printf("1 ");
		}
		else if (result <= 11)
		{
			printf("2 ");
		}
		else if (result <= 23)
		{
			printf("3 ");
		}
		else if (result <= 40)
		{
			printf("4 ");
		}
		else if (result <= 60)
		{
			printf("5 ");
		}
		else if (result <= 77)
		{
			printf("6 ");
		}
		else if (result <= 89)
		{
			printf("7 ");
		}
		else if (result <= 96)
		{
			printf("8 ");
		}
		else
		{
			printf("9 ");
		}
	}
	
	return 0;
}