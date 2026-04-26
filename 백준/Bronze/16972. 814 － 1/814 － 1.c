#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i;
	
	srand(102489);
	
	for (i = 0; i < 814; i++)
	{
		printf("%d %d\n", rand() % 16281 - 8140, rand() % 16281 - 8140);
	}
	
	return 0;
}