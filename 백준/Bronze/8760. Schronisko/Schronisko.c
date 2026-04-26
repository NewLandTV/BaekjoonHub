#include <stdio.h>

int main(void)
{
	int z;
	int w, k;
	
	scanf("%d", &z);
	
	for (; z > 0; z--)
	{
		scanf("%d %d", &w, &k);
		printf("%d\n", w * k >> 1);
	}
	
	return 0;
}