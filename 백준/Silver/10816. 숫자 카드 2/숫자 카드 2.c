#include <stdio.h>
#include <memory.h>

int main(void)
{
	int i;
	int n;
	int m;
	int* cards;
	
	cards = (int*)malloc(sizeof(int) * 20000001);
	
	scanf("%d", &n);
	
	for (i = 0; i < n; i++)
	{
		scanf("%d", &m);
		
		cards[m + 10000000]++;
	}
	
	scanf("%d", &m);
	
	for (i = 0; i < m; i++)
	{
		scanf("%d", &n);
		printf("%d ", cards[n + 10000000]);
	}
	
	free(cards);
	
	return 0;
}