#include <stdio.h>
#include <math.h>

int main(void)
{
	int a, b;
	
	scanf("%d %d", &a, &b);
	printf("%d", (int)ceil((double)a * b / (4840 * 5)));
	
	return 0;
}