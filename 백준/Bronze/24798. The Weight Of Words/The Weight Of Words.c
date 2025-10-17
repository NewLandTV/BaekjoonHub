#include <stdio.h>

#define Min(a, b) ((a) < (b) ? (a) : (b))

int main(void)
{
	int l, w;
	int weight, d;
	
	scanf("%d %d", &l, &w);
	
	if (w < l || w > l * 26)
	{
		printf("impossible");
		
		return 0;
	}
	
	weight = l;
	
	while (l--)
	{
		d = Min(w - weight, 25);
		weight += d;
		
		printf("%c", 'a' + d);
	}
	
	return 0;
}