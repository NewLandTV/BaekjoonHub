#include <stdio.h>

int main(void)
{
	int kingCount;
	int queenCount;
	int lookCount;
	int bishopCount;
	int nightCount;
	int pawnCount;
	
	scanf("%d", &kingCount);
	scanf("%d", &queenCount);
	scanf("%d", &lookCount);
	scanf("%d", &bishopCount);
	scanf("%d", &nightCount);
	scanf("%d", &pawnCount);
	
	printf("%d ", 1 - kingCount);
	printf("%d ", 1 - queenCount);
	printf("%d ", 2 - lookCount);
	printf("%d ", 2 - bishopCount);
	printf("%d ", 2 - nightCount);
	printf("%d", 8 - pawnCount);
	
	return 0;
}