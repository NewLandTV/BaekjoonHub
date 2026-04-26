#include <stdio.h>

int main(void)
{
	int i;
	int l, p;
	int count[5];
	
	scanf("%d %d", &l, &p);
	
	for (i = 0; i < 5; i++)
	{
		scanf("%d", &count[i]);
	}
	
	for (i = 0; i < 5; i++)
	{
		printf("%d ", count[i] - l * p);
	}
	
	return 0;
}