#include <stdio.h>
#include <math.h>

int main(void)
{
	int t;
	
	scanf("%d", &t);
	printf("%d", (int)round(pow(t * 0.5, 2)));
	
	return 0;
}