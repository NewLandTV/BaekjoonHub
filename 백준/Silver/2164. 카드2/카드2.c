#include <stdio.h>
#include <memory.h>

int main(void)
{
	int i;
	int n;
	int top = 0, count;
	int* cards;
	
	scanf("%d", &n);
	
	cards = (int*)malloc(sizeof(int) * n);
	
	for (i = 0; i < n; i++)
	{
		cards[i] = i + 1;
	}
	
	for (i = 1; i < n; i++, top--)
	{
		cards[top] = 0;
		
		for (count = 0; count != 2; top++)
		{
			if (top >= n)
			{
				top = 0;
			}
			else if (cards[top])
			{
				count++;
			}
		}
	}
	
	printf("%d", cards[top]);
	free(cards);
	
	return 0;
}