#include <stdio.h>

int main(void)
{
	int h, p;
	
	while (~scanf("%d %d", &h, &p))
	{
		printf("%.2f\n", (float)h / p);
	}
	
	return 0;
}