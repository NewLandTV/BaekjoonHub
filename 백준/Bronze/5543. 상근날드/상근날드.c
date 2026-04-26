#include <stdio.h>

int main(void)
{
	int i, j;
	int temp;
	int hamburgers[3];
	int beverages[2];
	int price;
	
	scanf("%d", &hamburgers[0]);
	scanf("%d", &hamburgers[1]);
	scanf("%d", &hamburgers[2]);
	scanf("%d", &beverages[0]);
	scanf("%d", &beverages[1]);
	
	for (i = 0; i < 2; i++)
	{
		for (j =  0; j < 2 - i; j++)
		{
			if (hamburgers[j] > hamburgers[j + 1])
			{
				temp = hamburgers[j];
				hamburgers[j] = hamburgers[j + 1];
				hamburgers[j + 1] = temp;
			}
		}
	}
	
	price = hamburgers[0];
	price += (beverages[0] < beverages[1] ? beverages[0] : beverages[1]) - 50;
	
	printf("%d", price);
	
	return 0;
}