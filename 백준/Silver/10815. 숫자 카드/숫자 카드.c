#include <stdio.h>
#include <memory.h>

int main(void)
{
	int i;
	int n;
	int* cards;
	int m;
	int key;
	
	scanf("%d", &n);
	
	cards = (int*)malloc(sizeof(int) * 20000001);
	
	for (i = 0; i < n; i++)
	{
		scanf("%d", &key);
		
		cards[key + 10000000] = 1;
	}
	
	scanf("%d", &m);
	
	for (i = 0; i < m; i++)
	{
		scanf("%d", &key);
		printf("%d ", cards[key + 10000000]);
	}
	
	free(cards);
	
	return 0;
}