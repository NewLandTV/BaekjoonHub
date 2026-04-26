#include <stdio.h>

#define Max(a, b) ((a) > (b) ? (a) : (b))
#define Min(a, b) ((a) < (b) ? (a) : (b))

int main(void)
{
	int w, l, h;
	int max, min;
	
	scanf("%d", &w);
	scanf("%d", &l);
	scanf("%d", &h);
	
	max = Max(w, l);
	min = Min(w, l);
	
	if (min >= h * 2 && max <= h * min)
	{
		printf("good");
		
		return 0;
	}
	
	printf("bad");
	
	return 0;
}