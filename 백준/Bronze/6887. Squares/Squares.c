#include <stdio.h>
#include <math.h>

int main(void)
{
	int tile;
	
	scanf("%d", &tile);
	printf("The largest square has side length %d.", (int)sqrt(tile));
	
	return 0;
}