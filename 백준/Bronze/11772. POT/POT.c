#include <stdio.h>
#include <math.h>

int main(void)
{
	int n;
	int p;
	int x;
	
	scanf("%d", &n);
	
	for (x = 0; n--;)
	{
		scanf("%d", &p);
		
		x += (int)pow(p / 10, p % 10);
	}
	
	printf("%d", x);
	
	return 0;
}